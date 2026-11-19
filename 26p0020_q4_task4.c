#include <stdio.h>
int main()
{
    float weight, height, bmi;

    printf("Enter weight in kg and height in m: ");
    scanf("%f %f", &weight, &height);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    } else {
        printf("Obese\n");
    } else if (bmi < 30) {
        printf("Overweight\n");
    } else if (bmi < 25) {
        printf("Normal\n");

    return 0;
}