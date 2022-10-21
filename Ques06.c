#include <stdio.h>
// a recursive function to print first N even natural numbers in reverse order
void evenRev(int);   // Function Declaration.
int main()
{
    int a;
    printf("Enter print value range :) ");
    scanf("%d", &a);

    printf("First %d Even Natural numbers in reverse order : ", a);
    evenRev(a*2);  // Function Call or Actual Arguments.
    
    printf("\n");
    return 0;
}
void evenRev(int n)   // Function Definition or Formal Arguments.
{
    if (n>0)  // Bass Case.
    {
        if (n % 2 == 0)
            printf("%d ", n);
        evenRev(n-1);  // Recursive Case.
    }
}
