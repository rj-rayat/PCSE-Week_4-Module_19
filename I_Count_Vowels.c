#include <stdio.h>

int count_vowel (char s[], int i, int count)
{
    if (s[i] == '\0')
    {
        return count;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        count++;
    }
    
    count_vowel(s, i+1, count);
}
int main()
{ 
    char s[201];
    fgets(s, 201, stdin);
    int count = 0;
    int result = count_vowel(s, 0, count);
    printf("%d\n", result);
    return 0;
}