#include "../include/main.h"
#include <unistd.h>
#include <stdio.h>
#include "input.c"
#include "execution.c"

int main() {
  char *command;
  char **tokens;
  char current_dir[100];

  while (1) {
    printf("urdushell@%s$ ", getcwd(current_dir, 100));
    command = read_command();
    tokens = tokenize_command(command);
    execute_command(tokens);
  }

  return 0;
}
