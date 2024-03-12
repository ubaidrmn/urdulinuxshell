#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int DEFAULT_COMMAND_SIZE = 20;
int DEFAULT_COMMAND_WORD_SIZE = 5;
char *DEFAULT_SUPPORTED_COMMANDS[] = {"dir_tabdeel_karo", "dir_banao", "dir_dikhao", "dir_urao", "mojooda_dir"};

char *read_command();
char **extract_words(char *command);

int main() {
  while (1) {
    char *command;
    char **command_words;
    printf("ubaidrmn@pc:~/$");
    command = read_command();
    command_words = extract_words(command);
    // printf("%.*s",DEFAULT_COMMAND_SIZE,command);
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

char **extract_words(char *command) {
  char **command_words;
  char *command_word;
  int i;
  
  command_words = malloc(sizeof(char*) * DEFAULT_COMMAND_WORD_SIZE);
  command_word = strtok(command, " ");
  i = 0;

  while(command_word) {
    command_words[i] = command_word;
    command_word = strtok(NULL, " ");

    i++;
  }

  return command_words;
}
