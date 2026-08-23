#include <iostream>

int main() {

    // Declaração. É obrigatório dizer o type da variável
    int x;

    // Associação de valor
    x = 5;
    
    /*
    Associação e declaração pode ser feita em uma linha
    int x = 5;
    */

    // ===== Tipos primitivos =====
    //int = inteiros
    int age = 17;

    //double = decimais
    double money = 19.99;

    //char = caracteres únicos; somente com aspas simples
    char level = 'A';

    //std::string = vários caracteres; somente com aspas duplas
    std::string name = "Carlinhos Pauleira";

    //bool = true ou false
    bool employed = true;

    //const = contantes
    const double PI = 3.14159;
    
    std::cout << "Nome: " << name << '\n';
    std::cout << "Idade: " << age << '\n';
    std::cout << "Nível: " << level << '\n';
    std::cout << "Empregado: " << employed << '\n';
    std::cout << "Dinheiro: " << money << '\n';

    return 0;
}
