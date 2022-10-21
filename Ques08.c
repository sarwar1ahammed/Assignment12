#include <stdio.h>
// A recursive function to print binary of a given decimal number.
void binary(int);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Binary number of %d is : ", a);
    binary(a);

    printf("\n");
    return 0;
}
void binary(int n)
{
    if (n == 0)
        return;    
    binary(n>>1);
    printf("%d", n&1);
}
