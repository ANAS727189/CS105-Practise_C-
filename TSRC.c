#include <stdio.h>
#include <math.h>

int main() {
    char ch, ar;
    double area = 0.0;
    double a, b, c, side, length, breadth, r, base, height; 

    printf("Enter T for printing the area of a triangle, S for a square, R for a rectangle, and C for a circle: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'T':
     printf("Enter the method you want to calculate the area of a triangle with - H for Heron's formula & A for the normal formula: ");
            scanf(" %c", &ar);
            if (ar == 'A' || ar =='a') {
                printf("Enter base and height: ");
                scanf("%lf %lf", &base, &height);
                area = (0.5) * base * height; 
                break;
            } else if(ar == 'H' || ar == 'h') {
                printf("Enter all three sides of the triangle to calculate the area: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                if (a > 0 && b > 0 && c > 0) {
                    double s = (a + b + c) / 2;
                    area = sqrt(s * (s - a) * (s - b) * (s - c));
                } else {
                    printf("Enter sides greater than zero.\n");
                }
                break;
            }
        case 'S':
            printf("Enter the side of the square to calculate its area: ");
            scanf("%lf", &side);
            if (side >= 0) {
                area = side * side;
            }
            break;

        case 'R':
            printf("Enter the length and breadth of the rectangle to calculate the area: ");
            scanf("%lf %lf", &length, &breadth);
            if (length >= 0 && breadth >= 0) {
                area = length * breadth;
            }
            break;

        case 'C':
            printf("Enter the radius to calculate the area of the circle: ");
            scanf("%lf", &r);
            if (r >= 0) {
                area = 3.14 * r * r; 
            }
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    printf("Area is %.2lf\n", area);
    return 0;
}
