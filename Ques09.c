#include <stdio.h>
// A recursive function to print octal of a given decimal number
void octal(int n)
{
    if (n == 0)
        return;
    octal(n/8);
    printf("%d", n%8);
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Octal number of %d is : ", a);
    octal(a);
    
    printf("\n");
    return 0;
}
