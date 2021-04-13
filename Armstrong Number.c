#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,n=0,b=0,c=0,t,d;
    scanf("%d",&a);
    n=a;
    t=a;
    while(a!=0){
        a=a/10;
        b++;}
    while(n!=0){
        d=n%10;
        c=c+pow(d,b);
        n=n/10;}
    if(c==t)
         printf("Yes");
    else 
        printf("No");
    return 0;
}
