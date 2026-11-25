#include <iostream>
#include <ctime>

int randomize() {return rand() % 10 + 1;}

int main() {
    // seed
    srand(time(NULL));

    bool running = true;
    int number = randomize();
    int guess;
    int tries = 0;

    char repeat;

    std::cout << "================= Advinha-Número ================" << '\n';

    while(running) {
        std::cout << "Chute um número: ";
        std::cin >> guess;
        tries++;

        // Compara os números
        if (guess > number) {
            std::cout << "O número menor!" << '\n' << '\n';

        } else if (guess < number) {
            std::cout << "O número maior!" << '\n' << '\n';
        
        // Se ganhar
        } else {
            std::cout << "Adivinhou! O número era " << number << '\n';
            std::cout << "Você precisou de " << tries << " chutes" << '\n' << '\n';
            
            std::cout << "Jogar novamente? [Y/N] ";
            std::cin >> repeat;
            
            // Repetir
            if (repeat == 'Y' || repeat == 'y') {
                std::cout << "De novo!" << '\n' << '\n';
                number = randomize();
                tries = 0;
            
            // Não repetir
            } else if (repeat == 'N' || repeat == 'n') {
                std::cout << "Tchau!";
                running = false;

            } else {
                std::cout << "É uma simples pergunta de Y ou N! Vai embora";
                running = false;
            }
        }
    }

    return 0;
}
