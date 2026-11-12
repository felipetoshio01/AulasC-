#include <iostream>
#include <ctime>

int main() {

    // srand(seed): define a seed do randomizador
    srand(time(NULL));

    // rand(): gera um número gigantesco; use mod para limitar
    int number = (rand() % 7) + 1;

    std::cout << number;

    return 0;
}
