#include "../include/main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

void execute_command(char **tokens) {
    char *token_0 = tokens[0];
    if (strcmp(token_0, BADLO_DIR) == 0) {
        chdir(tokens[1]);
    } else if (strcmp(token_0, BANAO_DIR) == 0) {
        mkdir(tokens[1], 0775);
    } else if (strcmp(token_0, EXIT_SHELL) == 0) {
        exit(EXIT_SUCCESS);
    } else {
      printf("%s: command not found\n", tokens[0]);
    }
}
