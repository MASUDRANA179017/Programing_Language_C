// Name: Masud Rana
// ID: 2023200010126
// Programming Language - I lab



#include <stdio.h>

int main() {
    int choice, repeat;
    float area, base, height, side, length, breadth, radius, diagonal1, diagonal2;

    do {
        printf("Choose a shape to calculate its area:\n");
        printf("1. Triangle\n");
        printf("2. Parallelogram\n");
        printf("3. Square\n");
        printf("4. Trapezoid\n");
        printf("5. Rhombus\n");
        printf("6. Solid (Rectangular) Surface Area\n");
        printf("7. Right Circular Cylinder Surface Area\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the base and height of the triangle: \n");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
        } else if (choice == 2) {
            printf("Enter the base and height of the parallelogram: \n");
            scanf("%f %f", &base, &height);
            area = base * height;
        } else if (choice == 3) {
            printf("Enter the side length of the square: \n");
            scanf("%f", &side);
            area = side * side;
        } else if (choice == 4) {
            printf("Enter the lengths of the parallel sides and the height of the trapezoid: \n");
            scanf("%f %f %f", &base, &side, &height);
            area = 0.5 * (base + side) * height;
        } else if (choice == 5) {
            printf("Enter the lengths of the diagonals of the rhombus: \n");
            scanf("%f %f", &diagonal1, &diagonal2);
            area = 0.5 * diagonal1 * diagonal2;
        } else if (choice == 6) {
            printf("Enter the length, breadth, and height of the solid (rectangular): \n");
            scanf("%f %f %f", &length, &breadth, &height);
            area = 2 * (length * breadth + length * height + breadth * height);
        } else if (choice == 7) {
            printf("Enter the radius and height of the right circular cylinder: \n");
            scanf("%f %f", &radius, &height);
            area = 2 * 3.14 * radius * (radius + height);
        } else {
            printf("Invalid choice\n");
            continue; // Go back to the beginning of the loop
        }

        printf("The area of the selected shape is: %.2f\n", area);

        printf("Do you want to calculate the area of another shape? (1 for yes, 0 for no): \n");
        scanf("%d", &repeat);
    } while (repeat == 1);

    return 0;
}


