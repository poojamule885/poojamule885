#include<stdio.h>
int main()
{
char Operator;
int num1,num2,result=0;
printf("Please enter proper operator(+,-,*,/):");
scanf("%c",&Operator);
printf("Enter values of operands num1 and num2:");
scanf("%d%d",&num1,&num2);
switch(Operator)
{
case'+':
result=num1+num2;
break;
case'-':
result=num1-num2;
break;
case'*':
result=num1*num2;
break;
case'/':
result=num1/num2;
break;
default:
printf("You have entered an invalid Operator");
}
printf("The result is %d%c%d=%d\n",num1,Operator,num2,result);
return 0;
}

