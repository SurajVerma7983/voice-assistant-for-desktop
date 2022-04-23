#include <stdio.h>

int main(){
    float marks[5];
    printf("Enter marks of five subjects \n");
    scanf("%f %f %f %f %f", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    float average=( marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
    printf("%f", average);
    printf("Vikrant singh");
    return 0;}
