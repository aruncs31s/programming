#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  float value_1;
  float value_2;
  struct node *next;

} node_t;

// Create a head , and point it to NULL;
//
//
node_t *create_new_node(node_t *head) {
  node_t *new_node;
  new_node->next = head;
  head = new_node;
  return new_node;
}
int main() {

  node_t *head;
  node_t n1, n2, n3;
  n3.next = &n2;
  n2.next = &n1;
  n1.next = NULL;

  n3.value_1 = 10;
  n2.value_1 = 10;
  n1.value_1 = 10;

  return 0;
}
