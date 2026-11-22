veryveryveryvery important thing is here 
i contols the number of swaps 
j controls the number of comparisons
#include <stdio.h>
int main() {
int i,j,n,temp;
    scanf("%d",&n);
    int a[n];
for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
                {
                    if(a[j]>a[j+1])//for descending order everything is same the only difference is the if condition 
                        FOR DESCENDING:The if condition is if(a[j]<a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }

        }
for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
