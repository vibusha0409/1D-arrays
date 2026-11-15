//this is chatgpt's code which is quiet simple
#include <stdio.h>

int main()
{
    int arr[5], count = 0, i;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("Even = %d\n", count);
    printf("Odd = %d", 5 - count);

    return 0;
}
