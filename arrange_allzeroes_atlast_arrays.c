#include <stdio.h>

int main()
{
    int a[7], i, j = 0;

    for(i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 7; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    while(j < 7)
    {
        a[j] = 0;
        j++;
    }

    for(i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
