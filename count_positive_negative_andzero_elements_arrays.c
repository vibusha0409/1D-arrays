#include <stdio.h>

int main() 
{
    int arr[10],i;
    for(int i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
    }
    int count1=0,count2=0,count3=0;
    for(int i=0;i<10;i++)
        {
            if(arr[i]==0)
            {
                count1++;
            }
            else if(arr[i]>0)
            {
                count2++;
            }
            else
            {
                count3++;
            }
        }
           
             printf("No of zero=%d\n",count1);
             printf("No of positive numbers=%d\n",count2);
             printf("No of negative numbers=%d\n",count3);
            
        
    return 0;
}
