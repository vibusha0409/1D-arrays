#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int a[n-1];
    int i,j,sum=0;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
    int obtainedsum=sum;
    int expectedsum=(n*(n+1))/2;
    int missingsum=expectedsum-obtainedsum;
    
    printf("%d",missingsum);
   
    return 0;
}
