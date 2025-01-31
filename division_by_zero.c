//Write a program to divide two numbers and prevent division by zero.
#include <stdio.h>
int main(){
    int num1,num2;
    float result;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    if(num2==0){
        printf("Division Error");
    }
    else{
        float result=num1/num2;
        printf("The result is:%f",result);
    }
    return 0;
}