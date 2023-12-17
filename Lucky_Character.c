#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];
scanf("%s",&s);

  while (s[c] != NULL) {
    if (c==6)
    {
        printf("%c",s[c]);
    }
    c++;
  }
}

