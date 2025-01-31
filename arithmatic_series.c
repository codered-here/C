//write a program to print n terms of an arithmatic series, with the first term a and a constant difference in a single qoutes
#include<stdio.h>
int main(){
    int a,d,n;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter difference in series");
    scanf("%d",&d);
    printf("Enter the stopping number:");
    scanf("%d",&n);
    printf("Arithmatic series is:\n");
    for(int i=0; i<n; ++i){
        printf("%d\t",a+i*d);
    }
    return 0;
}