#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d\n%d", &a, &b);
    if (a > b)
        printf("%d", a);
    else
        printf("%d", b);
    return 0;
}
