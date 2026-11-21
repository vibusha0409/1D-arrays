#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int a[n];
    int target;
    scanf("%d",&target);
    int i,j;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(a[i]+a[j]==target)
                        printf("%d ",a[i],a[j]);
                }
        }
    return 0;
}
