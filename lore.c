//Created by Asa Daboh May 4th, 2022
//
//The Documentation of the LORE robot
//
//
//


#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>

void test_one(int result, int age); 

void result(float dataCollection);

//P.S. Wish I had this when I was growing up to do better in school, now you can enjoy it!
struct user_information{

    //This is the user information taken from the EEG scan to optimize the user education experience 
    //Using a machine learning model, we can collect the data from a EEG scanner and look for levels of 
    //user stress during certain topics, understand how the user performance during various conditions and 
    //aids helps the user to be better at learning new things, completing assignments, and taking test. 
    char name; 
    int age; 
    int school_grade; 
    unsigned int gpa; 


};

int main(void){


    //Wew are going to have a userfile.txt file to store the information and send it to a bot 
    //on a different program to use for optimizing a better machine learning model for better learning 

    FILE *cf; 

    fopen("userfile.txt","+r"); 
 
    int age; 
    int grade; 

    struct user_information name; 
    
    name.f; //How do I get a users first and last name from an input into same variable for the file to record when called from. 

    name.l; 

 
    printf("Hello, I am L.O.R.E.S"); 

    printf("\nAnd who are you? "); 
    scanf("%c %c ", &name.f, &name.l); 

    printf("\nHello %c %c, welcome to the Learning Optimization and Recognition Electronic System!", name.f, name.l);

    printf("\nThis system is designed to optimize your learning experience during your time in formal education and beyond. ");
    
    printf("\nUsing a machine learning model called The Crown , we are able to optimize data collected from EEG scans \nthat were taken prior to starting this system to understand how you can better learn and become more productive overall."); 

    fclose("userfile.txt"); 
    

    return 0; 

}

void result(float dataCollection){
    printf("");
}

void test_one(int result, int age){
    printf("%d out of 100 is the first result", result);
}

