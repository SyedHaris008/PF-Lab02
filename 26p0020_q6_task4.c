#include <stdio.h>
int main()
{
    int w;
    printf("Enter weight of the watermelon (kg): ");
    scanf("%d", &w);

    if (w % 2 == 0 && w >= 4) {
        printf("YES\n");
    } else {
        printf("NO\n");
        }

    return 0;
}