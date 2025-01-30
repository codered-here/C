#include<stdio.h>
void main(){
    int x=3,y=2,z=6;
    if(x>y){
        if(x>z){
            printf("x is greatest among 3");
        }
        else{
            printf("z is greatest among 3");
        }
    }
    else{
        if(y<z){
            printf("y is greatest among 3");
        }
    
        else{
            printf("z is greatest among 3");
        }
    }
}