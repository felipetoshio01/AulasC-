#include <iostream>

/*
==================================
    Sintaxe:
    if (condition1) {
        // code

    } else if (condition2) {
        // code

    } else {
        // code
    }
==================================
*/
int main() {

    int age;

    std::cout << "Qual a sua idade? ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "Você é kid. Vaza";

    } else if (age == 18) {
        std::cout << "Bem-vindo ao novo mundo!";

    } else {
        std::cout << "Como vai a vida de big guy?";

    }

    return 0;
}
