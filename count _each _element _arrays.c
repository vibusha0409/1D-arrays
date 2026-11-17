#include<stdio.h>
int main()
{
    int count,i,j;
    int a[5]={2,3,3,2,4};
    int visited[5]={0};
    for(i=0;i<5;i++)
        {
          if(visited[i]==1)
        continue;

        count=1;

        for(j=i+1;j<5;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
                    printf("%d occurs %d times\n", a[i], count);

        }
    
    return 0;
}
