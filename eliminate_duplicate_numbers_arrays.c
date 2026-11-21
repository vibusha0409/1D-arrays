#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int a[n],visited[n];
    int i,j;
    for(int i=0;i<n;i++)
        {
            visited[i]=0;
        }
for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
               {
                   if(a[j]==a[i])
                   {
                       visited[j]=1;
                       
                   }
               }
       }
    for(i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                printf("%d",a[i]);
            }
        }
    return 0;
}
