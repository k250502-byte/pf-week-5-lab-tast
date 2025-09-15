#include <stdio.h>
#include <math.h>
int main()
{
    float radius , area , circumference ;
    printf("Enter Radius:");
    scanf("%f", &radius);
    area= 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    float result=sqrt(radius);
    printf("The area is %2f\n" , area );
    printf("The circumference is %2f\n" , circumference );
    printf("The square root is %2f\n" , result);
return 0;
}

    