#include <stdio.h>

int main() 
{
int arr[5]={10,20,30,40,50};
    int sum=0;
    float avg;
    for(int i=0;i<5;i++)
    {
      sum=sum+arr[i];

    }
    avg=sum/5;
    printf("%d\n",sum);
    printf("%.2f\n",avg);
    

    
    return 0;
}
