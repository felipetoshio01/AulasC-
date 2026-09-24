#include <iostream>

/*
=============================================================
    -> Executa o código, depois uma condição;
    se for true, refaz o código;
    se for false, não faz mais o código
    -> Útil quando se deve executar pelo menos uma vez
    o código

    Sintaxe:
    do {} while (condition);
=============================================================
*/

int main() {
    std::string password;

    do {
        std::cout << "Escolha uma senha (min: 8 caracteres): ";
        std::getline(std::cin, password);

    } while (password.length() < 8);
    
    std::cout << "Senha aceita!";

    return 0;
}
