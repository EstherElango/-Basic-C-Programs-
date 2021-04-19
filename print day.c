#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
     int week;
    
    scanf("%d", &week);
    if(week == 1)
    
        printf("MONDAY");
    
    else if(week == 2)
    
        printf("TUESDAY");
    
    else if(week == 3)
    
        printf("WEDNESDAY");
    
    else if(week == 4)
    
        printf("THURSDAY");
    
    else if(week == 5)
    
        printf("FRIDAY");
    
    else if(week == 6)
    
        printf("SATURDAY");
    
    else if(week == 0)
    
        printf("SUNDAY");
    
    else
    
        printf("INVALID");
    
    return 0;
}
