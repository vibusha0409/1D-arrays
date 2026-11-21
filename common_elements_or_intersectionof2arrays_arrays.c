//veryveryvery important this question can also be asked like intersection of twp arrays
#include <stdio.h>

int main() {
    int i,j,m,n;
    scanf("%d %d",&m,&n);
int a[m],b[n];
    for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
    for(i=0;i<m;i++)
        {
          for(j=0;j<n;j++)
        {
        if(a[i]==b[j])
        {
            printf("%d ",a[i]);
            break;//here there is a break statement because break here means "I have already found this element. No need to search further in b[]."
//like 3 itself may occur 2 times in b[] so counting it one time is enough
        }
     }
 }
    return 0;
}
