#include <iostream>

int main() {

    std::string string;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, string);

    // .length() -> Tamanho da string
    std::cout << "Comprimento: " << string.length() << '\n';

    // .empty() -> true se vazio; false se não vazio
    std::cout << "É vazia? " << (string.empty() ? "Sim" : "Não") << '\n';

    // .at(index) -> O char desse index
    if (string.empty()) {
        std::cout << "char do index 0: Não existe" << '\n';

    } else {
        std::cout << "char do index 0: " << string.at(0) << '\n';
    }
    
    // .append(std::string) -> Adiciona algo na frente
    std::cout << "Adicionando \"@gmail.com\": " << string.append("@gmail.com") << '\n';

    // .insert(index, std::string) -> Adiciona uma string no index dado
    std::cout << "Adicionando \"#\" no início: " << string.insert(0, "#") << '\n';

    // .find(char) -> Acha o primeiro index desse char
    std::cout << "Localização do primeiro espaço: " << string.find(' ') << '\n';

    // .clear() -> Apaga a string    
    string.clear();
    std::cout << "String limpa: " << string << "*Não tem nada aqui";

    return 0;
}