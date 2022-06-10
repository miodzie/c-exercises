#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.c"

struct point {
  int x;
  int y;
};

struct tnode {
  char *word; // text
  int count;
  struct tnode *left;
  struct tnode *right;
};

typedef struct Node {
  char *word;
  int count;
  struct Node *left;
  struct Node *right;
} Node;

Node *create_node() {
  return (Node*) malloc(sizeof(Node));
}

void print_tree(Node *node, int level) {
  if(node != NULL) {
    print_tree(node->left, level + 1);
    printf("%s\n", node->word);
    print_tree(node->right, level + 1);
  }
}

int main() {
  Stack *stack = create_stack();
  stack->word = "First";
  push("next", stack);
  push("another one", stack);
  char *word = pop(stack);
  printf("%s\n", word);
  /* word = pop(stack); */
  /* printf("%s\n", word); */
  return 0;

  Node *node = create_node();
  node->word = "foods";

  Node *left = create_node();
  left->word = "potato";
  node->left = left;

  Node *right = create_node();
  right->word = "lettuce";
  node->right = right;

  print_tree(node, 0);
  return 0;
}

