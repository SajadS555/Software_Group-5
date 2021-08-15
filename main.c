#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void calculator()                                                       //Binary calculator
{
    int first=0,second=0,num=0,op=0;
    float result;
    printf("(1)Addition\n(2)Subtraction\n(3)Multiplication\n(4)Division\n");
    scanf("%d",&num);
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
    result=first+second;                                            //Addition
    printf("%d + %d = %f",first,second,result);
    break;
case 2:
    result=first-second;                                           //Subtraction
    printf("%d - %d = %f",first,second,result);
    break;
case 3:
    result=first*second;                                           //Multiplication
    printf("%d * %d = %f",first,second,result);
    break;
case 4:
    if(second!=0)
    {
        result=first/second;                                       //Division
        printf("%d / %d = %f",first,second,result);
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
 
 //     //      //      //      //      //      //      //      //      //      //
 
                                                                 //Number Functions 
}
void  primenumber()                                               //Prime or Not
{
 int n,i,flag=0;
 printf("Enter the number to check prime:");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
 if(n%i==0)
 {
 printf("%d is not a prime number\n",n);
 flag=1;
 break;
 }
 }
 if(flag==0)
 printf("%d is a prime number\n",n);
 printf("Definition:\n");
 printf(" A prime number is a number greater than 1 with only two factors – themselves and 1\n");
 }
 
 
 //     //      //      //      //      //      //      //      //      //      //      //
 
void Amstrong()                                                 //Amstrong
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
 printf("%d is an Amstrong  number\n",temp_b);
 else
 printf("%d is not an Amstrong number\n",temp_b);
 printf("Definition:\n");
 printf("An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.");
 printf("\n For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.");
}

//     //      //      //      //      //      //      //       //      //      //

void OddorEven()                                                               //Odd or Even
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
}

//     //      //      //      //      //      //      //       //      //      //

void Factorial()                                                             //Factorial
{
  int i,fact=1,number;
  printf("Enter a number: ");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
    fact=fact*i;
  }
  printf("Factorial of %d is: %d\n",number,fact);
  printf("Definition:\n");
  printf("Factorial of a number is the The product of all of the positive integers from 1 to a given positive integer");
}

//     //      //      //      //      //      //      //       //      //      //      //

int main()                                                                   //Menu
{
    int a,b,c;
    printf("*To select an option please enter the corresponding number*\n");
    printf("(1)Binary calculator\n(2)Number Functions\n");
    scanf("%d",&a);
    if(a==1){
        calculator();
    }
    else
    {
        printf("(1)Prime checker\n(2)Amstrong number\n(3)Odd or Even\n(4)Factorial\n");
        scanf("%d",&b);
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

//Group 5
//Abhijith TP
//Sajad S
//Nafila KP
