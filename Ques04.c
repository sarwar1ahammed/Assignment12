#include <stdio.h>
/* 
    A recursive function to print first N odd natural 
    numbers in reverse order.
*/
void oddRev(int);   // Function Declaration.
int main()
{
    int a;
    printf("Enter print value range :) ");
    scanf("%d", &a);

    printf("First %d Odd Natural numbers in reverse order : ", a);
    oddRev(a*2);  // Function Call or Actual Arguments.
    
    printf("\n");
    return 0;
}
void oddRev(int n)   // Function Definition or Formal Arguments.
{
    if (n>0)  // Bass Case.
    {
        if (n % 2 != 0)
            printf("%d ", n);
        oddRev(n-1);  // Recursive Case.
        
    }
}
