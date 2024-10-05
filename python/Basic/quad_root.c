#include <math.h>
#include <stdio.h>

struct roots {
  float root1;
  float root2;
} roots;
struct roots;
struct roots *root(int a, int b, int c) {
  float d = b * b - 4 * a * c;
  float root2 = (-b - sqrt(d)) / (2 * a);
  float root1 = (-b + sqrt(d)) / (2 * a);
  roots.root1 = root1;
  roots.root2 = root2;
  return &roots;
}
int main() {
  struct roots *new_root;
  new_root = root(1, 5, 6);
  printf("Root 1 is %f", new_root->root1);
  printf("Root 2 is %f", new_root->root2);
}
