#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0
typedef struct node {
  int value;
  struct node *next;
} node_t;

node_t *create_new_node(int value) { return new_node; }

int main(int argc, char *argv[]) {
  node_t *head;
  node_t n1, n2, n3, n4, n5;
  head = &n1;
  n1.next = &n2;
  n2.next = &n3;
  n4.next = &n5;
  n1.value = 1;
  n2.value = 2;
  n3.value = 3;
  n4.value = 4;
  n5.value = 5;
  return EXIT_SUCCESS;
}
