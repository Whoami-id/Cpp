#include <iostream>



int main()
{
    double a;
    std::cout << "Please enter the value of a: ";
    std::cin >> a;

    double perimeter = 4 * a;
    double area = a * a;

    std::cout << "The perimeter is: " << perimeter << std::endl;
    std::cout << "The area is: " << area << std::endl;

    return 0;
}
