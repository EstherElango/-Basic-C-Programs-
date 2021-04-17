#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b=0,c=0;
    scanf("%d",&a);
    int  t=a;
    while (t!=0){
        b=t%10;
        c=(c*10)+b;
        t=t/10;}
    if(c==a)
        printf("Yes");
    else 
        printf("No");
    return 0;
}
