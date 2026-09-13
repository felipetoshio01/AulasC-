#include <iostream>

// condição ? expressão 1 (true) : expressão 2 (false)

int main() {

    int number;
    std::cout << "Digite um número: ";
    std::cin >> number;

    bool isEven = number % 2 == 0 ? true : false;

    std::cout << "É par (0 = não; 1 = sim)? " << isEven;

    return 0;
}
