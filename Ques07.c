#include <stdio.h>
// A recursive function to print squares of first N natural numbers
void square(int);   // Function Declaration.
int main()
{
    int x;
    printf("Enter print range value number : ");
    scanf("%d", &x);
    printf("Squares of First %d natural numbers are : ", x);
    square(x);      // Function Call or Actual Arguments.
    
    printf("\n");
    return 0;
}
void square(int n)  // Function Definition or Formal Arguments.
{
    if (n>0)    // Base Case.
    {
        square(n-1);    // Recursive Case.
        printf("%d ", n*n);
    }
}
