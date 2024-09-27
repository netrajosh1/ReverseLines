#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header20.h"
char filelines[MAXROW][MAXCOL]; //bonus declares global array

int main() {
  int val = 0;
  int num = 0;
  val = readlines();
  if (val == -1) { //error if line length exceeds MAXCOL
    fprintf(stderr, "Too many characters in this line!!\n");
    return 1;
  }
  if (val == -2) { //error if file length exceeds MAXROW
    fprintf(stderr, "Too many lines in the file!\n");
    exit(1);
  }
  num = reorder(val);
}
