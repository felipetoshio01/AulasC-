#include <iostream>

/*
==================================================
    Sintaxe:
    for (declaration; condition; increment)

    break = para o loop
    continue = pula uma iteração
==================================================
*/

int main() {
    
    // Começa em 0; vai até 10; de 1 em 1
    for (int i = 0; i <= 10; i++) {
        std::cout << i << " -> ";
    }

    std::cout << '\n';

    // Começa em 10, vai até 0; de 1 em 1
    for (int i = 10; i >= 0; i--) {
        std::cout << i << " -> ";
    }

    std::cout << '\n';

    // Começa em 0; vai até 20; de 2 em 2
    for (int i = 0; i <= 20; i += 2) {

        // Pula o 14
        if (i == 14) {
            continue;
        }

        std::cout << i << " -> ";
    }

    return 0;
}
