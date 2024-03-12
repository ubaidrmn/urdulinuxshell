#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h> 

int DEFAULT_COMMAND_SIZE = 20;
int DEFAULT_COMMAND_WORD_SIZE = 5;
char *DEFAULT_SUPPORTED_COMMANDS[] = {"badlo_dir", "banao_dir", "dikhao_dir", "urao_dir", "mojooda_dir"};

char *read_command();
char **extract_words(char *command);
void run_appropriate_command_function(char **command_words);

int main() {
  char *command;
  char **command_words;
  char current_dir[100];

  while (1) {
    printf("urdushell@%s$ ", getcwd(current_dir, 100));
    command = read_command();
    command_words = extract_words(command);
    run_appropriate_command_function(command_words);
  }

  return 0;
}

void run_appropriate_command_function(char **command_words) {
  char *cwd;
  if (strcmp(command_words[0], DEFAULT_SUPPORTED_COMMANDS[0]) == 0) {
    chdir(command_words[1]);
  } else {
    printf("%s: command not found\n", command_words[0]);
  }
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

