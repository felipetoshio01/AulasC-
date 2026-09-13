#include <iostream>

// Módulo de matemática
#include <cmath>

int main() {
    double num1;
    double num2;

    std::cout << "Digite um número: ";
    std::cin >> num1;

    std::cout << "Digite outro número: ";
    std::cin >> num2;

    // std::max(x, y): retorna o maior valor entre dois números x e y
    double max_number = std::max(num1, num2);
    std::cout << "O maior número é " << max_number << '\n';

    // std::min(x, y): retorna o menor valore entre dois números x e y
    double min_number = std::min(num1, num2);
    std::cout << "O menor número é " << min_number << '\n';

    // pow(x, y) [<cmath>]: eleva x para uma potência de y
    double power = pow(num1, num2);
    std::cout << num1 << " elevado a " << num2 << " é " << power << '\n';

    // sqrt(x) [<cmath>]: raiz quadrada de x
    double root = sqrt(num1);
    std::cout << "A raiz quadrada de " << num1 << " é " << root << '\n';

    // abs(x) [<cmath>]: valor absoluto de x (|x|)
    double mod = abs(num2);
    std::cout << '|' << num2 << '|' << " = " << mod << '\n'; 

    // round(x) [<cmath>]: arredonda o valor de x
    int rounded = round(num1);
    std::cout << num1 << " arredondado é " << rounded << '\n';

    // floor(x) [<cmath>]: arredonda para baixo
    int lower = floor(num2);
    std::cout << num2 << " arredondado para baixo é " << lower << '\n';

    // ceil(x) [<cmath>]: arredonda para cima
    int greater = ceil(num1);
    std::cout << num1 << " arredondado para cima é " << greater;

}
