//write c programm to find the second greatest number from the 3 numbers from the user input

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a < c)
        printf("Second biggest number is %d", a);
    if (b > a && b < c)
        printf("Second biggest number is %d", b);
    if (c > a && c < b)
        printf("Second biggest number is %d", c);
    return 0;
}
