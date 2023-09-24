working with variable scope
//how to use local and global variables
#include <stdio.h>

//global variable reside outside the block 
    int grade = 53;

//lacal variable reside inside this block 
int main(void)
{
    //this is a local variable
   // int grade = 32;
    printf("This is a local variable: %d\n", grade);
    {
        int grade = 45;
        printf("This is a local variable: %d\n", grade);
        
        //This is a local variable
        //gets its value from the global variable
        grade = 64; 
    
    }
    //this is another local variable in a differnt block
    
       
    printf("This is a for the local variable: %d", grade);
    return 0;
}
