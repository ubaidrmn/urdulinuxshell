#include <stdio.h>
#include <stdlib.h>

int DEFAULT_COMMAND_SIZE = 20;

char *read_command();

int main() {

  while (1) {
    char *command;
    printf("ubaidrmn@pc:~/$");
    command = read_command();
    printf("%.*s",DEFAULT_COMMAND_SIZE,command);
  }

  return 0;
}

char *read_command() {
  int i = 0;
  char *command_buffer = malloc(sizeof(char) * DEFAULT_COMMAND_SIZE);
  int character;
  
  while(1) {
      character = getchar();
      if (character == '\n') {
        command_buffer[i] = '\0';
        return command_buffer;
    } else {
        command_buffer[i] = character;
    }

    i++;
  }
}
