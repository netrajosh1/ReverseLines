#include <stdio.h>
#include "header20.h"
extern char filelines[MAXROW][MAXCOL]; //global array variable

int reorder(int rownum) {
  for (int i = rownum - 1; i >= 0; i--) { //iterates through rows
    for (int j = 0; j < MAXCOL; j++) { //iterates through columns
      fputc(filelines[i][j], stdout); //outputs each character
    }
  }
  return 0; //returns 0 upon successful output
}
