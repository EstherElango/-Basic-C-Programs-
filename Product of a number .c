#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b=0,c=1;
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        c=c*b;
        a=a/10;
        
    }
    printf("%d",c);
    return 0;
}
