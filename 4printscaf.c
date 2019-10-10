#include<stdio.h>
#include<conio.h>
/*******************************
*enter and add and averge the enter value
********************************/
int main()
{
    int firstNumber,secondNumber,sum;
    float average;
    printf("enter first number ");
    scanf("%d",&firstNumber);
    printf("\nenter second number");
    scanf("%d",&secondNumber);
    //logic
    sum=firstNumber+secondNumber;
    average=sum/2.0;
    printf("first number %d adn second number %d ,its sum is %d, and average is %f", firstNumber,secondNumber,sum,average);
    getch();
}
