#include <iostream>

// Operações básicas

int main() {

    double num1 = 3;
    double num2 = 5;

    // Soma
    std::cout << "num1 + num2:  " << num1 + num2 << '\n';

    // Subtração
    std::cout << "num1 - num2: " << num1 - num2 << '\n';

    // Multiplicação
    std::cout << "num1 * num2: " << num1 * num2 << '\n';

    // Divisão
    // -> Cuidado com a divisão de int, pois ele vai cortar partes decimais
    std::cout << "num1 / num2: " << num1 / num2 << '\n';

    // Módulo
    // -> Somente com inteiros
    std::cout << "num1 % num2: " << (int) num1 % (int) num2 << '\n';

    // ++ e --
    num1++;
    std::cout << "num1++: " << num1 << '\n';

    num2--;
    std::cout << "num2--: " << num2 << '\n';

    // Para fazer num = num <operator> value; temos:
    // -> num <operator>= value;

    return 0;
}
