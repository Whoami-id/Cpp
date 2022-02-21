#include <iostream>


int main()
{
    int year;
    std::cout << "Please enter the year: ";
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << "Is a leap year!" << std::endl;
            }
            else
            {
                std::cout << "Is not leap year!" << std::endl;
            }
        }
        else
        {
            std::cout << "Is a leap year!" << std::endl;
        }
    }
    else
    {
        std::cout << "Is not leap year!" << std::endl;
    }

    return 0;
}
