#include <stdio.h>
int my_array[] = {7, 12, 9, 4, 11};
int main() {

  // printf("%d%d", sizeof(my_array), sizeof(my_array[0]));
  int no_of_elements = sizeof(my_array) / sizeof(my_array[0]);
  for (int k = no_of_elements; k > 0; k--) {
    int minVal = my_array[0];
    for (int i = k; i < no_of_elements; i++) {
      if (my_array[i] < minVal) {
        my_array[k] = my_array[i];
      }
    }
  }
  // printf("Lowest value: %d\n", minVal);
  for (int i = 0; i < no_of_elements; i++) {
    printf("%d\n", my_array[i]);
  }
}
