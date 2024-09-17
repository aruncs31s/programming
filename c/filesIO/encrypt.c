#include <stdio.h>
struct user {
  char name[20];
  char password[20];
} user;
char key[20] = {'s', 'u', 'c', 'h', 'a', 'l', 'o', 'n', 'g', 'p',
                'a', 's', 's', 'w', 'd', 's', 't', 'h', 'i', 's'};

int main(int argc, char *argv[]) {
  struct user user_1;
  FILE *fp;
  fp = fopen("user_data.txt", "w");
  printf("Enter Name ");
  scanf("%s", user_1.name);
  printf("Enter Password");
  scanf("%s", user_1.password);
  for (int i = 0; i < sizeof(user_1.name) / sizeof(char); i++) {
    printf("0x%x ", user_1.name[i]);
  }
  printf("\n");
  for (int i = 0; i < sizeof(user_1.name) / sizeof(char); i++) {

    printf("0x%x ", user_1.name[i] ^ key[i]);
  }
  printf("\n");
  for (int i = 0; i < sizeof(user_1.name) / sizeof(char); i++) {

    printf("0x%x ", (user_1.name[i] ^ key[i]) ^ key[i]);
  }
  char encrypted[20];
  for (int i = 0; i < sizeof(user_1.name) / sizeof(char); i++) {

    encrypted[i] = user_1.name[i] ^ key[i];
  }

  fprintf(fp, " uid : %s\n password : %s \n", user_1.name, encrypted);
  return 0;
}
