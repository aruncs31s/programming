#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME 256
#define TABLE_SIZE 10
typedef struct {
  char name[MAX_NAME];
  int age;
} person;
person *hash_table[TABLE_SIZE];
unsigned int hash_funcion(char *name) {
  int length = strlen(name);
  unsigned int hash_value = 0;
  for (int i = 0; i < length; ++i) {
    hash_value += name[i];
    hash_value = hash_value * name[i];
    hash_value %= TABLE_SIZE;
  }
  return hash_value;
}
// To make table empty
void init_hash_table() {
  for (int i = 0; i < TABLE_SIZE; ++i) {
    hash_table[i] = NULL;
  }
}
void print_table() {

  for (int i = 0; i < TABLE_SIZE; ++i) {
    if (hash_table[i] == NULL) {
      printf("\t%i\t---- \n");
    } else {
      printf("\t%i\t%s, %d\n", i, hash_table[i]->name, hash_table[i]->age);
    }
  }
}
bool hash_table_insert(person *p) {
  if (p == NULL)
    return false;
  int index = hash_funcion(p->name);
  if (hash_table[index] != NULL) {
    return false;
  }
  hash_table[index] = p;
  printf(" p = %p", p);
  return true;
}
int main(int argc, char *argv[]) {
  init_hash_table();
  print_table();
  // printf("Arun %u\n", hash_funcion("Arun"));
  // printf("Some Other name %u\n", hash_funcion("Some other name"));
  person Arun = {.name = "Arun", .age = 109};
  person Ar = {.name = "Ar", .age = 104};
  person Aru = {.name = "Aru", .age = 120};
  person Aun = {.name = "Aun", .age = 12};
  person run = {.name = "run", .age = 130};
  person Arn = {.name = "Arn", .age = 20};
  hash_table_insert(&Arun);
  hash_table_insert(&Aun);
  hash_table_insert(&Aru);
  hash_table_insert(&Arn);
  hash_table_insert(&run);
  hash_table_insert(&Ar);
  print_table();
}
