#include<stdio.h>
#include<stdlib.h>
int main(){


    //Declaration for the container
    char grade;
    
    //Ask user for their grade
    printf("Enter your grade: ");
    
    //intercept the grade and store inside the cotainer
    //point to the container 
    scanf(" %c", &grade);
    
    //user entered their grade, grade has been stored 
    //Decision
    //if the grade is A, give the user the result
    if(grade == 'A'){
        printf("Your grade is very good");
    }
    
    //if grade is b, give the user the result
    else if(grade == 'B'){
    printf("Your grade is good", grade);    
    }
    
    //if grade is c, give the user the result
    else if(grade == 'C'){
    printf("Your grade is bad");    
    }
    //if user enters a wrong grade do this 
    else{
        printf("Invalid Input\nOnly input your grade in Capital letters.\nEnter your correct grade!");
    }
    return 0;
}
