#include <iostream>

int main() {
    std::string name = "João Prado";
    int age = 11;

    //Não existe format nem templates, só podemos usar interpolação
    std::cout << "Olá " << name << " com " << age << " anos ";

    return 0;
}
