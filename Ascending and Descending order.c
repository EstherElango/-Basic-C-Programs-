#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,m,i,j,min,temp;

    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && a[j-1]>a[j])
        {
            temp=a[j];
            a[j] =a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    m=n,i=0,j=n-1;
    while(m)
    {
        if(i<(n/2))
        {
            printf("%d\t",a[i]);
            i++;
        }
        else
        {
            printf("%d\t",a[j]);
            j--;
        }
        m--;
    }

return 0;
}