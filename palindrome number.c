#include<stdio.h>
long int reverse(long int n);
int palindrome(long int num);
void main()
{
    long int num;
    printf("enter the number");
    scanf("%ld",&num);
    if(palindrome(num))
    {
        printf("Number is a Palidrome\n");
    }
    else
    {
        printf("Number is not a palidrome\n");
    }
}
int palindrome(long int num)
{
    if (num==reverse(num))
    {
        return 1;
    }
    return 0;
}

long int reverse(long int n)
{
    long int rev=0;
    do{
        rev=rev*10+n%10;
        n/=10;
    }while(n>0);
    return rev;
}


