#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    int a[m];

    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);

    int b[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    // Print first array
    for(int i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }

    // Check second array
    for(int i=0;i<n;i++)
    {
        int found=0;

        for(int j=0;j<m;j++)
        {
            if(b[i]==a[j])
            {
                found=1;
                break;
            }
        }

        // Print only if not present in first array
        if(found==0)
        {
            int duplicate=0;

            for(int k=0;k<i;k++)
            {
                if(b[i]==b[k])
                {
                    duplicate=1;
                    break;
                }
            }

            if(duplicate==0)
            {
                printf("%d ",b[i]);
            }
        }
    }

    return 0;
}
