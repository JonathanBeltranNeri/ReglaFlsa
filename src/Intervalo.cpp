// Intervalo.cpp
#include "Intervalo.hpp"

Intervalo::Intervalo(double a, double b) : a(a), b(b) {}

double Intervalo::obtenerA() const {
    return a;
}

double Intervalo::obtenerB() const {
    return b;
}

void Intervalo::actualizarA(double nuevoA) {
    a = nuevoA;
}

void Intervalo::actualizarB(double nuevoB) {
    b = nuevoB;
}
