// Iteracion.cpp
#include "Iteracion.hpp"

Iteracion::Iteracion() : numero(1), anteriorXr(0), toleranciaDeseada(0.001) {}

int Iteracion::obtenerNumero() const {
    return numero;
}

double Iteracion::obtenerAnteriorXr() const {
    return anteriorXr;
}

double Iteracion::obtenerToleranciaDeseada() const {
    return toleranciaDeseada;
}

void Iteracion::incrementarNumero() {
    numero++;
}

void Iteracion::actualizarAnteriorXr(double nuevoXr) {
    anteriorXr = nuevoXr;
}

