//working with functions 
//simple arithmetic using function
#include <stdio.h>

//declare a function 
// function that returns an integer 
int add(int a, int b)
{
    int sum;
    sum = a + b;
    
    return sum;
}


int main(void){
    int test, val1,val2;
    val1 = 22;
    val2 = 54;
    
    test = add(val1, val2);
    
    printf("the sum is: %d", test);
    
}
