#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    char aux;

    std::cin >> a;
    std::cin >> b;

    std::cout << a.size() << " " << b.size() << std::endl;
    std::cout << a+b << std::endl;
    aux = a[0];
    a[0] = b[0];
    b[0] = aux;
    std::cout << a << " " << b << std::endl;
    return 0;
}
