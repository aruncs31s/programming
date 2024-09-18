#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0
#define MAX_LIST 1000
typedef struct node {
  int value;
  struct node *next;
} node_t;

// node_t *create_new_node(int value) { return new_node; }
bool print_nodes(node_t *head) {
  node_t *new_head = head;
  for (int i = 0; i < MAX_LIST; ++i) {
    if (new_head != 0) {
      printf("%d\n", new_head->value);
      new_head = new_head->next;
    }
  }
  return false;
}

node_t *create_new_node(int value) {
  node_t *new_node = malloc(sizeof(node_t));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
}

int main(int argc, char *argv[]) {
  node_t *head;
  node_t *tmp;
  // node_t n1, n2, n3;
  // head = &n1;

  // n2.next = &n3;
  // n3.next = NULL;
  // n1.value = 1;
  // n2.value = 2;
  // n3.value = 3;
  //
  for (int i = 0; i < 25; ++i) {
    tmp = create_new_node(i);
    tmp->next = head;
    head = tmp;
  }
  print_nodes(head);
  return EXIT_SUCCESS;
}
