#include <stdio.h>
int main()
{
    int test;
    scanf ("%d", &test);
    while (test--)
    {
        int n, c=0, flag=1;
        char word[50];
        scanf ("%d %s", &n, word);
        for (int i=0; i<n; i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                c = 0;
                flag = 1;
            }
            else
                c++;
            if (c == 4)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}
