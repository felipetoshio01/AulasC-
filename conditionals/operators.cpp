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

    // Se as duas condições forem verdadeiras
    if (number % 2 == 0 && number % 3 == 0) {
        std::cout << number << " é múltiplo de 6";

    // Se pelo menos uma for verdadeira
    } else if (number <= 0 || number >= 100) {
        std::cout << "Eu não gostei. Muito alto/baixo";
    
    // Se for falso
    } else if (number != 67) {
        std::cout << "Não botou nem múltiplo de 6 e nem 67??? Que feio.";

    } else {
        std::cout << "Você foi sem graça e não atendeu nenhuma das opções";

    }

    return 0;
}
