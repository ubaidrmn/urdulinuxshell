# Urdu Linux Shell

This is a simple shell program written in C that accepts commands in Roman Urdu.

## Commands

| Command      | Description                           |
|--------------|---------------------------------------|
| `badlo_dir`  | Change directory.                     |
| `banao_dir`  | Create a new directory.               |
| `urao_dir`   | Remove an existing directory.         |
| `mojooda_dir`| Print the current working directory.  |
| `saaf`       | Clear the screen.                     |
| `band`       | Exit the shell.                       |

## Usage

1. Clone the repository.
2. Compile the shell program using the provided Makefile by running `make`.
3. Run the compiled executable with `./urdushell`.
4. Enter Roman Urdu commands as specified above.

## Example

```bash
banao_dir some_dir # create a directory named some_dir
badlo_dir some_dir # enter the newly created directory
badlo_dir .. # come out of the directory
urao_dir some_dir # remove the directory
saaf # clear the screen
band # exit the shell
```
