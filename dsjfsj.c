#include <stdio.h>
int main() {
  char ch;
  //Print characters from 'A' to 'Z'
  for (ch = 'A'; ch <= 'Z'; ch++)
    //there is a whitespace after %c so that the
    //characters have spaces in between.
    printf("%c and the ascci value is %d\n", ch,ch);
  return 0;
}
