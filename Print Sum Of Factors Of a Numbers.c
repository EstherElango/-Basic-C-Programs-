#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, a=0, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
     if(n%i==0) 
        a=a+i;
     }
     printf("%d",a);
    return 0;
}
