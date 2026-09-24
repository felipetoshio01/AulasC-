#include <iostream>

/*
===========================================
    -> Executa uma condição primeiro;
    se for true, executa o loop;
    se for false, para o loop

    Sintaxe:
    while (condition) {}
    
    break = para o loop
===========================================
*/

int main() {
    bool correct = false;
    int answer;

    while (!correct) {
        std::cout << "Quanto é 12 x 5? ";
        std::cin >> answer;

        if (answer == 60) {
            correct = true;
            std::cout << "RESPOSTA CERTA! Parabéns";

        } else {
            std::cout << "RESPOSTA ERRADA! Tente novamente:\n";

        }
    }

    return 0;
}
