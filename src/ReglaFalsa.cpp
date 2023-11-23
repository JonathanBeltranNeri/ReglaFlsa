// main.cpp
// reglafalsa.cpp
#include "EcuacionExprtk.hpp"
#include "Intervalo.hpp"
#include "Iteracion.hpp"
#include "CalculadoraRaices.hpp"
#include "PresentacionResultados.hpp"

int main() {
    EcuacionExprtk ecuacion("cos(x) - x^2");
    Iteracion iteracion;
    CalculadoraRaices calculadora;
    PresentacionResultados presentacion;

    presentacion.ImprimirEncabezado();

    // Definir el rango inicial de búsqueda
    double rangoInicialA = -5.0;
    double rangoInicialB = 5.0;

    // Número máximo de iteraciones para encontrar intervalos con raíces
    const int maxIteraciones = 100;

    for (int i = 0; i < maxIteraciones; ++i) {
        Intervalo intervalo(rangoInicialA, rangoInicialB);

        if (intervalo.TieneRaiz(ecuacion)) {
            // Aplicar el método de la Regla Falsa para el intervalo con raíces
            presentacion.ImprimirLineaSeparadora();
            presentacion.ImprimirEncabezado();

            while (iteracion.ObtenerNumero() <= 5) {  // Cambia este límite según tus necesidades
                double a = intervalo.ObtenerA();
                double b = intervalo.ObtenerB();

                double fa = ecuacion.CalcularValor(a);
                double fb = ecuacion.CalcularValor(b);

                double xr = calculadora.ObtenerXr(a, b, fa, fb);
                double fxr = ecuacion.CalcularValor(xr);
                double fa_fxr = fa * fxr;
                double tolerancia = iteracion.ObtenerAnteriorXr() - xr;

                presentacion.ImprimirIteracion(iteracion.ObtenerNumero(), a, b, fa, fb, xr, fxr, fa_fxr, tolerancia);

                if (fxr > 0) {
                    intervalo.ActualizarA(xr);
                } else {
                    intervalo.ActualizarB(xr);
                }

                iteracion.IncrementarNumero();
                iteracion.ActualizarAnteriorXr(xr);
            }

            // Restablecer el rango inicial para continuar la búsqueda de intervalos
            rangoInicialA = intervalo.ObtenerB();
            rangoInicialB += 5.0;  // Ajusta según tus necesidades
        } else {
            // Si no se encuentra un intervalo con raíces, ajustar el rango inicial y continuar la búsqueda
            rangoInicialA = rangoInicialB;
            rangoInicialB += 5.0;  // Ajusta según tus necesidades
        }
    }

    return 0;
}
