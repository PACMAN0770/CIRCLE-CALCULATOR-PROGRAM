#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159265358979;

    printf("Enter the radius: ");
    if (scanf("%lf", &radius) != 1 || radius < 0) {
        printf("Invalid radius entered.\n");
        return 1;
    }

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("The area of the circle is: %.2lf cm^2\n", area);
    printf("The surface area of the sphere is: %.2lf cm^2\n", surfaceArea);
    printf("The volume of the sphere is: %.2lf cm^3\n", volume);

    return 0;
}
