#include <stdio.h>
#include <string.h>

/* Simples conversor de maiúsculas,
 * minúsculas e vice-versa */

char
toLower(char ch) {
  if(ch >= 65 && ch <= 90)
    return ch+32;
  else if(ch >= 97 && ch <= 122 )
    return ch-32;
  return ch;
}

int
main(int argc, char **argv) {
  for(int s=1; s < argc; s++) {
    for(int j=0; j < strlen(argv[s]); j++)
      printf("%c", toLower(argv[s][j]));
    putchar(32);
  }
  putchar(10);
}
    
