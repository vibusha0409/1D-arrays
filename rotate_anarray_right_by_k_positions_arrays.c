#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    int k;

    
for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
  
           for(int j=n-k;j<n;j++)
               {
                   printf("%d",a[j]);
               }
    for(int j=0;j<=k;j++)
        {
            printf("%d",a[j]);
        }
       
   
    return 0;
}
