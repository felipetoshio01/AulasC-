#include <iostream>

/*
    || = OU
    && = E
    !  = NÃO
*/

int main() {

    int number;

    std::cout << "Escolha um número: ";
    std::cin >> number;

    if (number % 2 == 0 && number % 3 == 0) {
        std::cout << number << " é múltiplo de 6";

    } else if (number <= 0 || number >= 100) {
        std::cout << "Eu não gostei. Muito alto/baixo";

    } else if (number != 67) {
        std::cout << "Não botou nem múltiplo de 6 e nem 67??? Que feio.";

    } else {
        std::cout << "Você foi sem graça e não atendeu nenhuma das opções";

    }

    return 0;
}
