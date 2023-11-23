// PresentacionResultados.cpp
#include "PresentacionResultados.hpp"
#include <iostream>

void PresentacionResultados::imprimirEncabezado() {
    std::cout << "Método de la Regla Falsa\n";
    std::cout << "f(x) = x^2 - 4\n";
    // ... (otros encabezados si es necesario)
}

void PresentacionResultados::imprimirIteracion(int numero, double a, double b, double fa, double fb, double xr, double fxr, double fa_fxr, double tolerancia) {
    std::cout << "| " << numero << " | " << a << " | " << b << " | " << fa << " | " << fb << " | " << xr << " | " << fxr << " | " << fa_fxr << " | " << tolerancia << " |\n";
    // ... (otros detalles de la iteración)
}

void PresentacionResultados::imprimirLineaSeparadora() {
    std::cout << "+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n";
}

