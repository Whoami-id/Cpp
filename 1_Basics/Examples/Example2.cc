#include <iostream>



int main()
{
    const double PI = 3.14159;

    double radius;
    std::cout << "Please enter the radius: ";
    std::cin >> radius;

    double perimeter = 2 * PI * radius;
    double area = PI * radius * radius;

    std::cout << "The perimeter is: " << perimeter << std::endl;
    std::cout << "The area is: " << area << std::endl;

    return 0;
}
