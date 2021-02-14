#include <iostream>

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;

    for (; a <= b; a++) {
        if(a == 1)
            std::cout << "one" << std::endl;
        else if(a == 2)
            std::cout << "two" << std::endl;
        else if(a == 3)
            std::cout << "three" << std::endl;
        else if(a == 4)
            std::cout << "four" << std::endl;
        else if(a == 5)
            std::cout << "five" << std::endl;
        else if(a == 6)
            std::cout << "six" << std::endl;
        else if(a == 7)
            std::cout << "seven" << std::endl;
        else if(a == 8)
            std::cout << "eight" << std::endl;
        else if(a == 9)
            std::cout << "nine" << std::endl;
        else
            std::cout << (a % 2 == 0 ? "even" : "odd") << std::endl;
    }



    return 0;
}
