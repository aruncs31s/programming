#include <cstddef>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node_t {
  int value;
  // To point to the next node in the list
  struct node_t *next;
};
typedef struct node_t node_t;

void print_the_list(node_t *head) {
  node_t *temperory_ptr = head;
  while (temperory_ptr != NULL) {
    printf("%d", temperory_ptr->value);
    temperory_ptr = temperory_ptr->next;
  }
}
int main() {
  node_t n1, n2, n3;
  node_t *head;
  n1.value = 10;
  n2.value = 100;
  n3.value = 200;

  // Linking them
  head = &n3;
  n3.next = &n2;
  n2.next = &n1;
  n1.next = NULL; // tail

  return 0;
}
