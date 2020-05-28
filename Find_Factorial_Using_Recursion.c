//C Recursion
//A function that calls itself is known as a recursive function. And, this technique is known as recursion.
//Program to find factorial of a number using recursion
#include<stdio.h>
int fact(int);//Function Declaration
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,fact(n));//Function Call
}
int fact(int n)//Function Definition
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
