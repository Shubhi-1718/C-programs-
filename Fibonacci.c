#include <stdio.h>
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return fib(n-1)+fib(n-2);
}
int main() {
    int n;
    printf("\nEnter a number ");
    scanf("%d",&n);
    if(n<0)
    printf("\nfactorial not possible");
    else
    for(int i=0;i<n;i++)
    {
    int r=fib(i);
    if(r<100)
    printf("%d ", r);
    }
    return 0;
}
