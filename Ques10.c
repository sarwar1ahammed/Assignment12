#include <stdio.h>
// A recursive function to print reverse of a given number.
void reverse(int);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    reverse(a);
    printf("\n");
    return 0;
}
void reverse(int n)
{
    int remi;
    if (n==0)
        return;
    
    remi = n % 10;
    printf("%d", remi);
    reverse(n/10);

}
