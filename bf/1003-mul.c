#include <stdio.h>

int main()
{
    int a, b, result;

    printf("Enter two digits: ");
    scanf("%d %d", &a, &b);

    result = a * b;

    printf("The result is: %d\n", result);

    return 0;
}
