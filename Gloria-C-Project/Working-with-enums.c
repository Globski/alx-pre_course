// My first go working with enums 
#include <stdio.h>

//Declare the enum
enum Month
{
    January = 1,
    Febuary,
    March,
    April,
    May,
    June,
    July,
};

int main() {
    enum Month MyMonth;

        MyMonth = Febuary;
    
    printf("The second month is: %d", MyMonth);

    return 0;
}
