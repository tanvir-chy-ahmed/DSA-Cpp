#include <stdio.h>
/*

OUTPUT:

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/


int main()
{

  int n = 4;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}