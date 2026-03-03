# Harvard-CS50-Assignments


#include <stdio.h>
#include "cs50.h"

int main(void){
   int height= get_int("Enter the height please: \n"); 
    while(height<0){
        height= get_int("Enter the height please: \n");  
    }

    for (int row  = 1; row <= height; row++)
    {
        for(int spaces = 1 ; spaces<=height-row; spaces++){
            printf(" ");
        }
        
        for(int hashes = 0 ; hashes < row ;hashes++ ){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
