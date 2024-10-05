#include <stdio.h>
#include <stdlib.h>
struct node {

  int data;
  struct node *next;
};
typedef struct node node_t;

void print_list(node_t *head) {
  node_t *current = head;
  while (current != NULL) {
    printf("%d\n", current->data);
    current = current->next;
  }
}
node_t *create_new_node(int data) {
  node_t *new_node = malloc(sizeof(node_t));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

int int main(int argc, char *argv[]) {}

