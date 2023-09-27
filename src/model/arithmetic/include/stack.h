#ifndef S21_SMARTCALC_V1_0_STACK_H
#define S21_SMARTCALC_V1_0_STACK_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct {
  char data[STACK_SIZE];
  int top;
} CharStack;

typedef struct {
  double data[STACK_SIZE];
  int top;
} DoubleStack;

// Создание стека
CharStack* create_stack();
DoubleStack* create_double_stack();

// Проверка, пуст ли стек
int is_char_empty(CharStack* stack);

// Добавление элемента в стек
void push_char(CharStack* stack, char value);
void push_double(DoubleStack* stack, double value);

// Извлечение элемента из стека
char pop_char(CharStack* stack);
double pop_double(DoubleStack* stack);

// Просмотр верхнего элемента стека
char peek_char(CharStack* stack);
double peek_double(DoubleStack* stack);

// Уничтожение стека
void destroy_char(CharStack* stack);
void destroy_double(DoubleStack* stack);

#endif  // S21_SMARTCALC_V1_0_STACK_H
