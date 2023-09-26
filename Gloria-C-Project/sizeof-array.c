#include <stdio.h>

int main() {
    int array[5];
    
    printf("my array size is: %d\n", sizeof(array));
    printf("my array address is the address of the first element[0]: %p", &array);

    return 0;
}
