#include <iostream>

// typedef <variable-name> <new-name>;
// -> É um encurtador de nomes variáveis; por convenção, elas sempre terminam com _t
typedef std::string str_t;

// using <new-name> = <variable-name>;
// -> Mais recomendável e compatível com templates
using number_t = int;

int main() {

    str_t name = "Renato Moura";
    number_t age = 65;

    std::cout << "Olá, " << name << '\n';
    std::cout << "Você tem " << age << " anos";

    return 0;
}
