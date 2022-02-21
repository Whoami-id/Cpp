#include <iostream>


int main(){

    int *p;
    int var = 7;
    int foo = 34;
    p = &foo;

    int& ref = foo;

    std::cout << p << std::endl;
    std::cout << &p << std::endl;
    std::cout << *p << std::endl;
    std::cout << &var << std::endl;
 
    std::cout << "-----------------------------------" << std::endl;
   
    std::cout << &foo << std::endl;
    std::cout << ref << std::endl;
    std::cout << foo << std::endl;
    std::cout << &ref << std::endl;






return 0;




}