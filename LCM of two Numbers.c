#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
         int a,b, i,g=0;
         scanf("%d %d", &a, &b);

         for(i=1 ; i <=a && i <= b ; i++){
                 if(a%i==0 && b%i==0)
                 g = i;}
         int l=(a*b)/g;
         printf("%d",l);   
    return 0;
}
