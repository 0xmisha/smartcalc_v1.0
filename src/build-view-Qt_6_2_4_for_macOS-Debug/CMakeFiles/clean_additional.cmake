# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Notation_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Notation_autogen.dir/ParseCache.txt"
  "CMakeFiles/SmartCalc_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SmartCalc_autogen.dir/ParseCache.txt"
  "Notation_autogen"
  "SmartCalc_autogen"
  )
endif()
