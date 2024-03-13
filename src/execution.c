#include "../include/main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

void execute_command(char **tokens) {
    char *token_0 = tokens[0];
    char current_dir[100];

    if (strcmp(token_0, BADLO_DIR) == 0) {
        chdir(tokens[1]);
    } else if (strcmp(token_0, BANAO_DIR) == 0) {
        mkdir(tokens[1], 0775);
    } else if (strcmp(token_0, URAO_DIR) == 0) {
        rmdir(tokens[1]);
    } else if (strcmp(token_0, MOJOODA_DIR) == 0) {
        printf("%s\n", getcwd(current_dir, 100));
    } else if (strcmp(token_0, SAAF) == 0) {
        system("clear");
    } else if (strcmp(token_0, EXIT_SHELL) == 0) {
        exit(EXIT_SUCCESS);
    } else {
      printf("%s: command not found\n", tokens[0]);
    }
}
