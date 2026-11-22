i represents the position where we want to place the smallest element.
j represents the index used to search for the smallest element in the remaining unsorted array.
#include <stdio.h>

int main()
{
    int n, i, j, min, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for(i = 0; i < n-1; i++)
    {
        min = i;

        for(j = i+1; j < n; j++)  j starts with i+1 bcoz u dont have to check for i as u have declared it is minimum
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
