#ifndef MAIN_H

#define MAIN_H

// Malloc Size Definitions

#define DEFAULT_COMMAND_SIZE 20
#define DEFAULT_COMMAND_TOKEN_SIZE 5

// Command Definitions

#define BADLO_DIR "badlo_dir"
#define BANAO_DIR "banao_dir"
#define DIKHAO_DIR "dikhao_dir"
#define URAO_DIR "urao_dir"
#define MOJOODA_DIR "mojooda_dir"
#define EXIT_SHELL "exit"
// static char *DEFAULT_SUPPORTED_COMMANDS[] = {"badlo_dir", "banao_dir", "dikhao_dir", "urao_dir", "mojooda_dir"};

// Function definitions

char *read_command();
char **tokenize_command(char *command);
void execute_command(char **tokens);

#endif
