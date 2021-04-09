#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a=1,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        a=a*i;
    printf("%d",a);
    return 0;
}