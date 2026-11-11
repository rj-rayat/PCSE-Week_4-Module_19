#include <stdio.h>
long long int factorial (int n, long long total)
{

    if (n == 0)
    {
        return total;
    }
    total = total * n;
    factorial(n-1, total);
    
}
int main()
{ 
    int n;
    scanf("%d", &n);
    long long int total = 1;
    long long int result = factorial(n, total);
    printf("%lld\n", result);
    return 0;
}