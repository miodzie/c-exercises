#include <stdio.h>

typedef struct Stack {
  char *word;
  struct Stack *prev;
} Stack;

Stack *create_stack() {
  return (Stack*) malloc(sizeof(Stack));
}

char *pop(Stack *s) {
  s = s->prev;

  return s->word;
}

void push(char *word, Stack *stack) {
  Stack *new = create_stack();
  new->word = word;
  new->prev = stack;
}
