#include <stdio.h>
// A recursive function to print first N even natural numbers
void even(int);   // Function Declaration.
int main()
{
    int a;
    printf("Enter print value range :) ");
    scanf("%d", &a);

    printf("First %d Even Natural numbers : ", a);
    even(a*2);  // Function Call or Actual Arguments.
    
    printf("\n");
    return 0;
}
void even(int n)   // Function Definition or Formal Arguments.
{
    if (n>0)  // Bass Case.
    {
        even(n-1);  // Recursive Case.
        if (n % 2 == 0)
            printf("%d ", n);
    }
}
