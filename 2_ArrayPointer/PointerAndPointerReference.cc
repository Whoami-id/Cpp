#include <iostream>

void passByval(int val){
    std::cout << &val << std::endl; 
    std::cout << val << std::endl; 
}

void passByRef(int &ref){
    std::cout << &ref << std::endl; 
    std::cout << ref << std::endl;
}



void callByPtr(int *a){
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << *a << std::endl;
}


void callByPtrRef(int *&a){
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << *a << std::endl;
}







int main(){

    int a = 10;
    int *p = &a;

    std::cout << &a << std::endl;
    std::cout << p << std::endl;
    std::cout << &p << std::endl;

    std::cout << "-------------------------------" << std::endl;

    passByval(a);
    std::cout << "-------------------------------" << std::endl;
    passByRef(a);
    std::cout << "-------------------------------" << std::endl;
    callByPtr(p);
    std::cout << "-------------------------------" << std::endl;
    callByPtrRef(p);

    







     return 0;
}