#include<stdio.h>
#include<math.h>
void main(){
    float p=1000,r=5,t=2;
    double am,ci;
    am=p*pow(1+(r/100),t);
    ci=am-p;
    printf("%.1f",ci);
}