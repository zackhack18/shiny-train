/*Write a program to print the sum of n terms of given series, 1/2 + 1/2 + 1/3 +......+1/n*/
#include <stdio.h>
void main()
{
    int n, i;
    float sum=0;
    printf("Enter the no.of terms");
    scanf("%d",&n);

    i = 1;
    while(i<=n)
    {
        sum = sum + 1/i;
        i++;
    }
    printf("sum = %d", sum);
}
