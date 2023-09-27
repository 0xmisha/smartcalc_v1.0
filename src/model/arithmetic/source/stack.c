#include "../include/stack.h"

CharStack *create_stack() {
  CharStack *stack = (CharStack *)malloc(sizeof(CharStack));
  stack->top = -1;
  return stack;
}

int is_char_empty(CharStack *stack) { return stack->top == -1; }

void push_char(CharStack *stack, char value) {
  stack->top++;
  stack->data[stack->top] = value;
}

char pop_char(CharStack *stack) { return stack->data[stack->top--]; }

char peek_char(CharStack *stack) { return stack->data[stack->top]; }

void destroy_char(CharStack *stack) { free(stack); }

DoubleStack *create_double_stack() {
  DoubleStack *stack = (DoubleStack *)malloc(sizeof(DoubleStack));
  stack->top = -1;
  return stack;
}

void push_double(DoubleStack *stack, double value) {
  stack->top++;
  stack->data[stack->top] = value;
}

double pop_double(DoubleStack *stack) { return stack->data[stack->top--]; }

double peek_double(DoubleStack *stack) { return stack->data[stack->top]; }

void destroy_double(DoubleStack *stack) { free(stack); }
