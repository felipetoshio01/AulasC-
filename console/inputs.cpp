#include <iostream>

// std::cin = character input
// -> Obtém um input do usuário. O tipo é corretamente ajustado para o tipo da variável desejada
// -> o cin considera espaços em branco e tabulações (\n) como separadores. Logo, eles cortam o input

// std::getline(input, variable)
// -> Obtém uma linha completa, considerando espaços
// -> Usar ele após o cin, faz ele ler a quebra de linha (\n) imediatamente, pulando-o completamente. Para evitar isso, retire os espaços em branco (white spaces) com >> std::ws

// >> = extrator
// -> Retira uma informação de algo

int main() {

    // Variáveis
    std::string username;
    int age;
    std::string phrase;

    // std::getline() pois há espaços em branco
    std::cout << "Qual o seu nome? ";
    std::getline(std::cin, username);

    // std::cin pois é só um int
    std::cout << "Qual a sua idade? ";
    std::cin >> age;

    // std::getline() com std::ws para retirar o \n do input buffer
    std::cout << "Diga uma frase inspiradora: ";
    std::getline(std::cin >> std::ws, phrase);

    std::cout << "Olá, "<< username << '\n';
    std::cout << "Você tem "<< age << " anos!" << '\n';

    std::cout << "Você disse: " << phrase << '\n';
    std::cout << "E isso nos inspirou muito. Valeu, tenha uma boa tarde!";

    return 0;
}
