#include <iostream>

double iode_mols(double volume);
double c_mass(double iode_mols);

int main() {
    
    // Em gramas
    double const SAMPLE_MASS = 0.8;
    double const TOTAL_MASS = 2.9;

    double volume;

    std::cout << "Qual o volume de iodo usado? (mL) ";
    std::cin >> volume;

    double mols = iode_mols(volume);
    double vitamin_mass = c_mass(mols);

    double sample_percentage = vitamin_mass / SAMPLE_MASS;

    double real_mass = vitamin_mass * TOTAL_MASS / SAMPLE_MASS;

    std::cout << "Número de mols de iodo: " << mols << " mols\n";
    std::cout << "Massa vitamina C (amostra): " << vitamin_mass << " g\n";
    std::cout << "Porcentagem na amostra: " << sample_percentage << "%\n";
    std::cout << "Massa vitamina C (comprimido): " << real_mass << " g";

    return 0;
}

double iode_mols(double volume) {
    // Concentração de iodo (mol/L)
    double const CONCENTRATION = 0.00875;

    // Conversão para litros
    volume /= 1000;

    return CONCENTRATION * volume;
}

double c_mass(double iode_mols) {
    // Massa molar da vitamina C (g/mol)
    double const C_MOLAR_MASS = 176.12;

    return C_MOLAR_MASS * iode_mols;
}   
