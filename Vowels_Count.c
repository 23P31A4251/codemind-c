#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];
  scanf("%[^
]",&s);

  while (s[c] != NULL) {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("%d", count);
}

