#include <stdio.h>
int main()
{

    float r;
    int side;
    float area;
    int area1;

    printf("Enter the radius of the circle:");
    scanf("%f", &r);

    area = 3.14 * r * r;
    printf("area of the circle%f\n", area);

    printf("Enter the side of squre :");
    scanf("%d", &side);

    area1 = side * side;
    printf("area of square is %d", area1);

    return 0;
}