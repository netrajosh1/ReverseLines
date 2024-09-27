#include <stdio.h>
#include "header20.h"
extern char filelines[MAXROW][MAXCOL]; //global variable

int readlines() {
  FILE * fp;
  fp = fopen("test.dat", "r");
  if (fp == NULL) { //checks if file can be opened successfully
    printf("File opening error!\n");
    return 1;
  }
  int a = 0;
  int row_num = 0;
  int col_num = 0;
  while ((a = fgetc(fp)) != EOF) { //reads in characters from a file
    if (col_num > MAXCOL) { //checks if file length is too large
      return -1;
    }
    else if (row_num >= MAXROW) { //checks if file length is too large
      return -2;
    }
    else {
      filelines[row_num][col_num] = a; //populates array with each character
      col_num++;
    }

    if (a == '\n') { //if character read is new line, go to the next line
      row_num++;
      col_num = 0;
    }
  }
  fclose(fp);
  fp = NULL;
  return row_num; //returns number of lines read
}
