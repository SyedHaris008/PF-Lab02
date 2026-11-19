#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three distinct integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("a is the largest value %d\n", a);
        } else {
            printf("c is the largest value %d\n", c);
            }
    } else {
        if (b > c) {
            printf("b is the largest value %d\n", b);
        } else {
            printf("c is the largest value %d\n", c);
            }
      }

    return 0;
}