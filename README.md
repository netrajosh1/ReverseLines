# ReverseLines

A simple C program that reads a text file, stores its contents in a 2D character array, and then prints the lines in reverse order. The program handles errors such as exceeding the allowed number of characters per line and exceeding the allowed number of lines.

## Table of Contents
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
- [Compilation](#compilation)
- [Functions](#functions)
- [Error Handling](#error-handling)
- [Global Variables](#global-variables)

## Features
- Reads from a file (`test.dat`).
- Stores file contents in a 2D array.
- Outputs the file contents in reverse order.
- Error handling for:
  - Lines with too many characters.
  - Files with too many lines.

## Requirements
- GCC Compiler.
- A file named `test.dat` in the working directory.

## Usage
1. Prepare a file named `test.dat` in the same directory as the executable. The file must not exceed:
   - 20 lines (`MAXROW`).
   - 10 characters per line (`MAXCOL`).
2. Run the compiled executable to reverse the lines of the file.

## Compilation
To compile the program, run the following command:

```bash
make
```
## Functions
This section outlines the key functions implemented in the ReverseLines Application, along with their descriptions and parameters.

### readlines

```c
int readlines()
```

Description
- Reads the contents of test.dat line by line.
- Populates the global array filelines with the file’s characters.
- Returns the number of lines read or an error code (-1 for too many characters in a line, -2 for too many lines).

### reorder

```c
int reorder(int rownum)
```

Description
- Reverses the order of the lines stored in the global array filelines.
- Outputs the lines in reverse order to the terminal.

Parameters
- rownum: Number of rows to be reversed

## Global Variables
- filelines[MAXROW][MAXCOL]: A global 2D array that holds the file content, where MAXROW is the maximum number of rows (lines) and MAXCOL is the maximum number of columns (characters per line).

