// Intervalo.hpp
#ifndef INTERVALO_HPP
#define INTERVALO_HPP

class Intervalo {
private:
    double a;
    double b;

public:
    Intervalo(double a, double b);

    double obtenerA() const;
    double obtenerB() const;
    void actualizarA(double nuevoA);
    void actualizarB(double nuevoB);
};

#endif

