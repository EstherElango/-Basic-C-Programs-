#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        int a,c=0;
        float b=0;
        scanf("%d",&a);
        b=sqrt((float)a);
        c=b;
        if(c==b)
                printf("Yes");
        else
                printf("No");
        
    return 0;
}