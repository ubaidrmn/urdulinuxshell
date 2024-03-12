#include "../include/main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

char **tokenize_command(char *command) {
  char **tokens;
  char *token;
  int i;
  
  tokens = malloc(sizeof(char*) * DEFAULT_COMMAND_TOKEN_SIZE);
  token = strtok(command, " ");
  i = 0;

  while(token) {
    tokens[i] = token;
    token = strtok(NULL, " ");

    i++;
  }

  return tokens;
}
