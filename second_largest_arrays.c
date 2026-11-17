//this is actually quite easy logic only first take 3 elements a[3]={10,8,9} and check then go with these 5 elements 
//youtubr channel referred:PORTFOLIO COURSES
#include <stdio.h>
int main() {
int max1,max2;
    int a[5]={12,8,9,4,10};
    if(a[0]>a[1])
    {
        max1=a[0];
        max2=a[1];
    }
    else
    {
        max1=a[1];
        max2=a[0];
    }
    for(int i=2;i<5;i++)
        {
            if(a[i]>max1)
            {
                max2=max1;
                max1=a[i];
            }
            else if(a[i]>max2&&a[i]<max1)
            {
                max2=a[i];
            }
        
        }
    printf("%d",max2);
    
}
