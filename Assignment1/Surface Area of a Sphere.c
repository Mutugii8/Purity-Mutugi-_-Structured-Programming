#include <stdio.h>
#include <stdlib.h>

int main()
{const double PI=3.142;
       double r;
       double area;
    printf("Please provide radius of sphere\  ");
    scanf("%lf",&r);
    area=4*PI*r*r;
    printf("The area is %lf", area);
    return 0;
}
