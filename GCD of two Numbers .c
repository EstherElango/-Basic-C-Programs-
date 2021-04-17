#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int a,b, i, g;
        scanf("%d %d", &a, &b);

        for(i=1 ; i <=a && i <= b ; i++)
         {
                if(a%i==0 && b%i==0)
                 g = i;}
     printf("%d",g);

   

    return 0;
}
