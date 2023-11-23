// Iteracion.hpp
#ifndef ITERACION_HPP
#define ITERACION_HPP

class Iteracion {
private:
    int numero;
    double anteriorXr;
    double toleranciaDeseada;

public:
    Iteracion();

    int obtenerNumero() const;
    double obtenerAnteriorXr() const;
    double obtenerToleranciaDeseada() const;

    void incrementarNumero();
    void actualizarAnteriorXr(double nuevoXr);
};

#endif

