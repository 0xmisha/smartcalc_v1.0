CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c11

TEST_FLAGS = -lcheck -lpthread -pthread -lm 

ALL = $(wildcard *.c arithmetic/source/*.c credit/*.c deposit/*.c arithmetic/include/*.h credit/*.h deposit/*.h)
SRC = $(wildcard *.c arithmetic/source/*.c credit/*.c deposit/*.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

TEST_SRC = $(wildcard ./tests/*.c)
TEST_OBJ2 = $(patsubst ./tests/%.c, ./tests/%.o, $(TEST_SRC))

ifeq ($(shell uname -s),Linux)
	TEST_FLAGS += -lsubunit -lgcov -lrt
endif

all: clean s21_smartcalc.a test

test.a: $(TEST_OBJ2)
	ar r test.a $^

s21_smartcalc.a: $(OBJ)
	ar rc s21_smartcalc.a $^
	ranlib s21_smartcalc.a
	rm -rf *.o

test: s21_smartcalc.a test.a
	$(CC) test.a s21_smartcalc.a $(TEST_FLAGS) -o test.out
	./test.out

gcov_report: clean
	$(CC) $(FLAGS) -fprofile-arcs -ftest-coverage $(TEST_SRC) $(SRC) -o test.out $(TEST_FLAGS)
	./test.out
	lcov -t "smartcalc.a" -o smartcalc.a.info -c -d .
	lcov --extract smartcalc.a.info "*/arithmetic/source/*" -o filtered.info
	genhtml -o gcov_report filtered.info
	rm -rf *.gcno *.gcda *.out

fixstyle:
	clang-format -style=Google -i $(ALL)

style:
	clang-format -style=Google -n $(ALL)

testforleaks: s21_smartcalc.a test.a 
	$(CC) $(FLAGS) test.a s21_smartcalc.a $(TEST_FLAGS) -o test.out

leaks: testforleaks
ifeq ($(shell uname -s), Linux)
	valgrind --leak-check=yes  ./test.out
else
	leaks --atExit -- ./test.out
endif

clean:
	rm -rf *.o *.a check.c ./tests/*.o ./tests/*.a test.out *.gcno *.gcda gcov_report *.info arithmetic/source/*.o credit/*.o deposit/*.o
