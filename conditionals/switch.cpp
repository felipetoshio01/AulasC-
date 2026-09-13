#include <iostream>

int main() {

    int dayOfWeek;

    std::cout << "Insira o dia da semana (1 a 7): ";
    std::cin >> dayOfWeek;

    switch (dayOfWeek) {
    case 1:
        std::cout << "Domingo. Aff, quase começando a semana";
        break;
    
    case 2:
        std::cout << "Segunda. Ai que preguiça";
        break;  

    case 3:
        std::cout << "Terça. Deu pra acordar, mas que sono";
        break;  

    case 4:
        std::cout << "Quarta. Metade já né?";
        break;  
    
    case 5:
        std::cout << "Quinta. Véspera de sexta!";
        break;  

    case 6:
        std::cout << "Sexta. Sextou galera!";
        break;  

    case 7: 
        std::cout << "Sábado. Dia de descansar";
        break;

    default:
        std::cout << "E isso lá é dia da semana? Pra mim, só ia de 1 a 7";
        break;
    }

    return 0;
}
