int main() {
  int x = 10;
  void *ptr;
  ptr = &x;
  printf("The value of x =%d ", *(int *)ptr);
}
