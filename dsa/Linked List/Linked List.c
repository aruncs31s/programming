#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * Date: 2024-09-20
 */

typedef struct node {
  int data;
  struct node *next;
} node_t;

bool print_list(node_t *head) {
  node_t *iterator_node = head;
  if (iterator_node == NULL) {
    printf("\n");
    return false;
  } else {
    printf("%d ... ", iterator_node->data);
    iterator_node = iterator_node->next;
  }
  print_list(iterator_node);
}

node_t *create_new_node(int data) {
  node_t *new_node = malloc(sizeof(node_t));
  new_node->data = data;
  return new_node;
}
int main() {
  node_t *head = NULL;
  node_t *tmp;
  // for creating node at the end ;
  // for (int i = 0; i < 10; ++i) {
  //   tmp = create_new_node(i);
  //   tmp->next = head;
  //   head = tmp;
  // }

  // How to create node at the begining?
  /* If i were to create node at the begining
   * then the new_node's next location will point to NULL */
  node_t new_node_1;
  node_t new_node_2;
  new_node_1.next = NULL;
  new_node_1.data = 10;
  head = &new_node_1;
  new_node_2.next = NULL;
  head->next = &new_node_2;
  // node_t n1, n2, n3, n4;
  // head = &n4;
  // n4.next = &n3;
  // n3.next = &n2;
  // n2.next = &n1;
  // n1.next = NULL;
  // n4.data = 10;
  // n3.data = 20;
  // n2.data = 30;
  // n1.data = 40;

  print_list(head);
  return 0;
}
