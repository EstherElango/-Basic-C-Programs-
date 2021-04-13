#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,b=0;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        b++;
    }
  printf("%d",b);
    return 0;
}
