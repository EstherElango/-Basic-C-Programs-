#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        
    int num, n, rem, b = 0, c = 1;
    scanf("%d", &num);

    n = num;

    while (n > 0)
    {
        rem = n % 2;
        b += rem * c;
        c*= 10;
        n /= 2;
    }
    
    printf("%d", b);
    return 0;
}
