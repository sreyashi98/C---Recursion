//Program to print Fibonacci series of given range using recursion
#include<stdio.h>
int fibo(int);//Function declaration
int main()
{
    int n,i;
    printf("Enter Range:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibo(i));//Function Call
    }
}
int fibo(int n)//Function Definition
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
