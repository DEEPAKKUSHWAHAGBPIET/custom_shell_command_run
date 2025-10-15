# Process Fork and Execute Program

A simple C program that demonstrates process creation and command execution using `fork()` and `execvp()` system calls[web:17][web:19].

## Description

This program creates a child process that executes an external command specified as command-line arguments, while the parent process waits for the child to complete[web:19][web:20]. It showcases fundamental Unix/Linux process management concepts including process forking, program execution, and process synchronization[web:17][web:22].

## Features

- Creates a child process using `fork()`[web:19][web:22]
- Executes external commands via `execvp()`[web:17][web:20]
- Parent process waits for child completion using `wait()`[web:19][web:22]
- Proper error handling for system calls[web:20][web:22]
- Command-line argument validation[web:22]

## Requirements

- Unix/Linux operating system
- GCC compiler
- Standard C libraries: `stdio.h`, `stdlib.h`, `unistd.h`, `sys/wait.h`[web:17][web:19]

## Compilation

