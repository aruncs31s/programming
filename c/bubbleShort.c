#include <stdio.h>
int main() {
  int A[20];
  int n, i, temp;
  printf("Enter the number of elements\n");
  scanf("%d", &n);

  for (i = 0; i < n; ++i) {
    printf("Enter the elements\n");
    scanf("%d", &A[i]);
  }
  for (i = 0; i < n; ++i) {
    printf("%d\t", A[i]);
  }
}
