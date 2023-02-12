#include <stdio.h>
#include <stdlib.h>




struct present {  
    char *present_name;  // Character to represent current name 
    float price;  
    };  
 
struct present* delete_present_list(struct present* present_list, int num){
        
    int list; //create an integer to hold present list amount

    if(present_list == NULL) // if there is nothing inside the list, return NULL
    return NULL;

    for(list = 0; list < num; list++)// create a loop to delete the members of the arrays
        free(present_list[list].present_name);//free will delete those names from the list 

    free(present_list); //will free up the pointer (present*) for a new list to be made

    return NULL;
    

 };



