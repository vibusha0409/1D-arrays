//my own code 😁(❁´◡`❁)
#include <stdio.h>

int main() {

    int arr[5],count=0,i,element;
    for(int i=0;i<5;i++)
        {
     scanf("%d",&arr[i]);
        }
   int elements=sizeof (arr)/sizeof (arr[0]);//or instead of this step u can eliminate this step bcoz u the the no of elements which is 5 in this case
        for(int i=0;i<5;i++)
            {
    if(arr[i]%2==0)
    {
        count++;
    }
            }
    printf("Even=%d",count);
                printf("Odd=%d",elements-count);

        
    return 0;
}
