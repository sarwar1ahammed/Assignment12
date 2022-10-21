#include <stdio.h>
/*
    A recursive function to print first N natural 
    numbers in reverse order.
*/
void revNatNum(int);    // Function Declaration.
int main()
{
    int a;
    printf("Enter how many numbers you wants to print : ");
    scanf("%d", &a);

    printf("First %d natural numbers in reverse order are : ");
    revNatNum(a);   // Function Call or Actual Arguments.

    printf("\n");
    return 0;
}
void revNatNum(int n)   // Function Definition or Formal Arguments.
{
    if (n>0)    // Bass Case.
    {
        printf("%d ", n);
        revNatNum(n-1);     // Recursive Case.     
    }
}
