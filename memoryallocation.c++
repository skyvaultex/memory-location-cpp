#include <iostream>
int memorylocation(){
    int a;
    std::cin >> a;
    int* p = &a;
    std::cout << "The memory location of a is: " << (void*)p << std::endl;
    return 0;
}
int main() {
    memorylocation();
    return 0;
}