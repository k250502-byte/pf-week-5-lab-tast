#include <stdio.h>
int main()
{
    int mark1 , mark2, mark3 ;
    printf("Enter mark 1: ");
    scanf("%d", &mark1);
    printf("Enter mark 2: ");
    scanf("%d", &mark2);
    printf("Enter mark 3: ");
    scanf("%d", &mark3);
    int largest = (mark1 > mark2) ?  ((mark1 > mark3) ? mark1 : mark3) : ((mark2 > mark3) ? mark2 : mark3);
    printf("The largest number is: %d\n", largest);
    return 0;
}
