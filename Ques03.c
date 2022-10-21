#include <stdio.h>
// A recursive function to print first N odd natural numbers
void odd(int);   // Function Declaration.
int main()
{
    int a;
    printf("Enter print value range :) ");
    scanf("%d", &a);

    printf("First %d Odd Natural numbers : ", a);
    odd(a*2);  // Function Call or Actual Arguments.
    
    printf("\n");
    return 0;
}
void odd(int n)   // Function Definition or Formal Arguments.
{
    if (n>0)  // Bass Case.
    {
        odd(n-1);  // Recursive Case.
        if (n % 2 != 0)
            printf("%d ", n);
    }
}
