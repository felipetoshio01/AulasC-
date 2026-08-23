#include <iostream>

//namespace serve para evitar conflitos de variáveis

namespace user1 {
    std::string password = "12345";
}

namespace user2 {
    std::string password = "BananaSauro";
}

//:: = delimitador de escopo da variável

// using namespace <nome-namespace>
// -> Diz que todas as variáveis não delimitadas usaram essa namespace

// using <nome-namespace>::<variável>
// -> Diz que toda variável com esse nome será dessa namespace

// Não precisa mais usar o prefixo std:: para o cout
using std::cout;

int main() {
    
    cout << "Senha 1: " << user1::password << '\n'; 
    cout << "Senha 2: " << user2::password;

    return 0;
}
