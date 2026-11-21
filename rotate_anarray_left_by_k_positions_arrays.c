
#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    
for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  int k=2;
           for(int j=k;j<n;j++)
               {
                   printf("%d",a[j]);
               }
    for(int j=0;j<k;j++)
        {
            printf("%d",a[j]);
        }
       
   
    return 0;
}
