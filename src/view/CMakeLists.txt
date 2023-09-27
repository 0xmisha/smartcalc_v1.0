
cmake_minimum_required(VERSION 3.5)

project(SmartCalc VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_C_COMPILER "gcc")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools PrintSupport REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools PrintSupport REQUIRED)

set(BACKEND
    ../model/arithmetic/include/rpn.h
    ../model/arithmetic/include/smartcalc.h
    ../model/arithmetic/include/stack.h
    ../model/arithmetic/include/utils.h
    ../model/arithmetic/source/rpn.c
    ../model/arithmetic/source/smartcalc.c
    ../model/arithmetic/source/stack.c
    ../model/arithmetic/source/utils.c
    ../model/credit/credit.c
    ../model/credit/credit.h
    ../model/deposit/deposit.c
    ../model/deposit/deposit.h
)

set(QT_SOURCES
        qcustomplot.cpp
        qcustomplot.h
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(SmartCalc
        MANUAL_FINALIZATION
        ${QT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET SmartCalc APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(SmartCalc SHARED
            ${QT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(SmartCalc
            ${QT_SOURCES}
        )
    endif()
endif()

add_library(Notation STATIC ${BACKEND})

target_link_libraries(SmartCalc PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Notation)
target_link_libraries(SmartCalc PRIVATE Qt${QT_VERSION_MAJOR}::PrintSupport)

set_target_properties(SmartCalc PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(SmartCalc)
endif()

