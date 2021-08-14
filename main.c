#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int calculator()
{
    int first=0,second=0,num=0,op=0;
    float result;
    printf("(1)Addition\n(2)Subtraction\n(3)Multiplication\n(4)Division\n");
    scanf("%d",&num);
    system("cls");
     switch(num)
        {
        case 1:
            op=1;
            break;
        case 2:
           op=2;
            break;
        case 3:
            op=3;
            break;
        case 4:
          op=4;
            break;
        default:
            printf("Invalid Entry");
            break;
        }

 printf("Enter the first digit:");
 scanf("%d",&first);
 printf("Enter the second digit:");
 scanf("%d",&second);
 switch(op)
 {
 case 1:
    result=first+second;
    printf("%f",result);
    break;
case 2:
    result=first-second;
    printf("%f",result);
    break;
case 3:
    result=first*second;
    printf("%f",result);
    break;
case 4:
    if(second!=0)
    {
        result=first/second;
        printf("%f",result);
        break;
    }

    else
    {
       printf("Invalid operation");
       break;
    }
default:
    printf("Not possible");
    break;
 }

}
int  primenumber()
{
 int n,i,flag=0;
 printf("Enter the number to check prime:");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
 if(n%i==0)
 {
 printf("%d is not prime",n);
 flag=1;
 break;
 }
 }
 if(flag==0)
 printf("%d is prime",n);
 }
int Amstrong()
{
 int n,r,sum=0,temp_a,temp_b,count=0;
 printf("enter the number=");
 scanf("%d",&n);
 temp_a=temp_b=n;
 while(n>0)
 {
     n/=10;
     count++;
 }
 while(temp_a>0)
 {
 r=temp_a%10;
 sum+=pow(r,count);
 temp_a/=10;
 }
 if(temp_b==sum)
 printf("%d is an Amstrong  number ",temp_b);
 else
 printf("%d is not an Amstrong number",temp_b);
}
int OddorEven()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
}
int Factorial()
{
  int i,fact=1,number;
  printf("Enter a number: ");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
    fact=fact*i;
  }
  printf("Factorial of %d is: %d",number,fact);
}

int main()
{
    int a,b,c;
    printf("(1)Binary calculator\n(2)Number Functions\n");
    scanf("%d",&a);
    system("cls");
    if(a==1){
        calculator();
    }
    else
    {
        printf("(1)Prime checker\n(2)Amstrong number\n(3)Odd or Even\n(4)Factorial\n");
        scanf("%d",&b);
        system("cls");
        switch(b)
        {
        case 1:
            primenumber();
            break;
        case 2:
            Amstrong();
            break;
        case 3:
            OddorEven();
            break;
        case 4:
            Factorial();
            break;
        default:
            printf("Invalid Entry");
            break;
        }
    }
}
