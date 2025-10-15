# Process Executor

A minimal C program that demonstrates process creation and execution of system commands using fork() and execvp().

## Features

- Executes any command available in the system’s `$PATH`.
- Supports multiple arguments dynamically.
- Demonstrates process creation using `fork()`.
- Demonstrates process replacement using `execvp()`.
- Parent process waits for the child to complete before continuing.
- Prints useful debug information:
   - Parent PID
   - Child PID
   - Command execution status

## Requirements

- GCC or any C compiler
- Unix/Linux environment (Linux, macOS, WSL, etc.)

