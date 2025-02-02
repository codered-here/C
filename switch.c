#include <stdio.h>
int main(){
    char day;
    printf("Enter marks:");
    scanf("%c",&day);
    // age >=18 ? printf("adult") : printf("Not adult");
    switch(day){
        case 'a': printf("monday\n");
            break;
        case 'b': printf("tuesday\n");
            break;
        case 'c': printf("wednusday\n");
            break;
        case 'd': printf("thrusday\n");
            break;
        case 'e': printf("friday\n");
            break;
        case 'f': printf("saturday\n");
            break;
        case 'g': printf("sunday\n");
            break;
        default: printf("not a vaild day");

    }
}