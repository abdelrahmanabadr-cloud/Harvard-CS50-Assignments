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

// ## Problem 5: Loops - Pattern 2 (20 points)

// **Task:** Write a program that prints a right-aligned triangle.

// **Example:**
// ```
// Height: 4
//    #
//   ##
//  ###
// ####
// ```
// **Hints:**
// - Think about spaces before the # symbols
// - Row 1: (height - 1) spaces, then 1 #
// - Row 2: (height - 2) spaces, then 2 #s
// - And so on...