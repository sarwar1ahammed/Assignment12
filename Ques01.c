#include <stdio.h>
// A recursive function to print first N natural numbers
void natNum(int);   // Function Declaration.
int main()
{
    int a;
    printf("Enter how many numbers you wants to print : ");
    scanf("%d" , &a);

    printf("First %d natural numbers are : ", a);
    natNum(a);  // Function Call or Actual Arguments.
    
    printf("\n");
    return 0;
}
void natNum(int n)  // Function Definition or Formal Arguments.
{
    if (n>0)    // Bass Case.
    {
        natNum(n-1);    // Recursive Case.
        printf("%d ", n);
    }
}
