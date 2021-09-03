/*
 * if condition 
 * if2.c
 * coded on 2-10-21
 * by fr3y
 * cc @fr3yc0d3
*/ 


#include <stdio.h>
int main(){
    int a;
    printf("enter any number and try your luck");
    scanf("%d",&a);
    if(a<13){
        printf("what the hell you really have some low number");
    }
    if(a>13){
        printf("wow looks like you are in trak");
    }
    return 0;
}
