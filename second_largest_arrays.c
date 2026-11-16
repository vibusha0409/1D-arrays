#include <stdio.h>

int main()
{
    int arr[5] = {10, 50, 30, 80, 60};

    int largest = arr[0];
    int second = -999999;

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second largest = %d\n", second);

    return 0;
}
