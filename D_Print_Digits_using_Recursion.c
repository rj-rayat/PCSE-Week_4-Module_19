#include <stdio.h>

void print_digits (int n)
{
    if (n == 0)
    {
        return;
    }

    
    print_digits(n / 10);
    int last = n % 10;
    printf("%d ", last);

}
int main()
{ 
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d", 0);
    }
    print_digits(n);
    printf("\n");
  }

  return 0;
}