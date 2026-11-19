#include <stdio.h>
int main() 
{
    float x, y;
    printf("Enter x and y coordinates: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origin\n");
    } else if (y == 0) {
        printf("On the X-axis\n");
    } else if (x == 0) {
        printf("On the Y-axis\n");
    } else if (x > 0 && y > 0) {
        printf("Quadrant I\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrant II\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrant III\n");
    } else {
        printf("Quadrant IV\n");
    }

    return 0;
}