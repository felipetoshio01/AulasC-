#include <iostream>
#include <cmath>

int main() {
    double cat1, cat2;

    std::cout << "Medida do primero cateto: ";
    std::cin >> cat1;

    std::cout << "Medida do segundo cateto: ";
    std::cin >> cat2;

    double hypotenuse = sqrt(cat1 * cat1 + cat2 * cat2);
    std::cout << "A hipotenusa mede " << hypotenuse << '\n';

    return 0;
}
