#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct node_t {
  int value;
  // To point to the next node in the list
  struct node_t *next;
};

// alias `struct node_t` to `node_t`
typedef struct node_t node_t;

// Function expects the value to be stored in a node the actual argument will
// contain the value for node
node_t *create_new_node(int value) {
  // create a new node and allocate space for it in the moemory
  node_t *result = malloc(sizeof(node_t));
  // assign the value from the actual argument
  result->value = value;
  // make the next location as null this will be used when creating the next
  // node
  result->next = NULL;
  // now return the address of the result
  printf("%d\n", &result);
  return result;
}
void print_the_list(node_t *head) {
  node_t *temperory_ptr = head;
  while (temperory_ptr != NULL) {
    printf("%d - ", temperory_ptr->value);
    temperory_ptr = temperory_ptr->next;
  }
  printf("\n");
}
int main() {
  node_t *head = NULL;
  node_t *tmp;
  for (int i = 0; i < 25; ++i) {

    tmp = create_new_node(i);
    tmp->next = head;
    head = tmp; // need to find out why?

    // tmp->next = head;
    // node_t *tmp = malloc(sizeof(node_t));
    // tmp->value = i;
    // tmp->next = head;
    // head = tmp;
  }
  print_the_list(head);
  // Inserting New Node
  return 0;
}
