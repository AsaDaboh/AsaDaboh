//Asa Daboh
//5-25-21
//Cost of circular plot of Land 

#include <stdio.h>

#define PI 3.14159

int main() {

    float radius, area;
    float cost, totalcost;

    //prompt the user to enter the radius.
    printf("Please enter the radius and cost of your circle.\n");

    //read the radius in.
    scanf("%f%f", &radius, &cost);

    //calculate the area of the circle.
    area = PI*radius*radius;
    totalcost = cost*area;

    //print out the total cost of the circle.
    printf("The circle will cost $%.f.\n", totalcost);

    return(0);
}
