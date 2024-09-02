#include <stdio.h>

int main(int argc, char *argv[]) {
  struct user {
    char name[20];
    char password[20];
  } user;
  struct user user_1;
  FILE *fp;
  fp = fopen("user_data.txt", "w");
  printf("Enter Name ");
  scanf("%s", user_1.name);
  printf("Enter Name ");
  scanf("%s", user_1.password);
  fprintf(fp, " uid : %s\n password : %s \n", user_1.name, user_1.password);
  return 0;
}
