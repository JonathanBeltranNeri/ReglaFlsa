// CalculadoraRaices.cpp
#include "CalculadoraRaices.hpp"

double CalculadoraRaices::obtenerXr(double a, double b, double fa, double fb) {
    return ((a * fb) - (b * fa)) / (fb - fa);
}
