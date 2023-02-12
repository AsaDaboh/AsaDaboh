//Asa Daboh
//5-27-21
//Program 2 for Lecture Assignment 1 
//Calculates the volume n feet of a box given the length, 
//width, and height. Volume is given in cubic feet.

#include<stdio.h>
#include<stdlib.h>

int main(){

    float length, width, height, Volume_in_Inches, Volume_in_Feet;

    printf("\nPlease Enter the following measurements in inches.\n\n");

    printf("Length:\n");
    scanf("%f", &length);

    printf("Width:\n");
    scanf("%f", &width);

    printf("Height:\n");
    scanf("%f", &height);

    Volume_in_Inches = (length*width*height);

    printf("The volume is:%1.2f cubic inches.\n", Volume_in_Inches);

    Volume_in_Feet = (length/12)*(width/12)*(height/12);

    printf("The volume is %1.2f cubic feet.\n", Volume_in_Feet);

    return (0);
    
}