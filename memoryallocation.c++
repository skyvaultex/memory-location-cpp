#include <iostream>
#include <stdio.h>
int memorylocation(){
    int a = 42;
    int* p = &a;
    printf("The memory location of a is: %p\n", (void*)p);
    return 0;
}
int main() {
    memorylocation();
    return 0;
}