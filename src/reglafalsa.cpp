#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

double resolverEcuacion(double valor) {
  // Cambié la ecuación a x^2 - 4
  return pow(valor, 2) - 4;
}

double obtenerxr(double a, double b, double fa, double fb) {
  return ((a * fb) - (b * fa)) / (fb - fa);
}

int main() {

  double a = 0.5;
  double b = 2.5;
  int iterador = 1;
  double tolerancia = 0;
  double anterior_xr = 0;
  double toleranciaDeseada = 0.001;

  cout << "Método de la Regla Falsa" << endl;
  // Cambié la descripción de la ecuación
  cout << "f(x) = x^2 - 4" << endl;
  cout << "Intervalos: [" << a << ", " << b << "]" << endl;
  cout << "Tolerancia: " << toleranciaDeseada << "\n\n\n";

  cout << "+-----------+-------------+-------------+-------------+-------------+"
         "-------------+-------------+-------------+------------+" << endl;
  cout << "|Iteraciones|       a     |       b     |     f(a)    |     f(b)    "
         "|      xr     |    f(xr)    |  f(a)*f(xr) | Tolerancia |" << endl;
  cout << "+-----------+-------------+-------------+-------------+-------------+"
         "-------------+-------------+-------------+------------+" << endl;

  while (1) {
    double fa = resolverEcuacion(a);
    double fb = resolverEcuacion(b);
    double xr = obtenerxr(a, b, fa, fb);
    double fxr = resolverEcuacion(xr);
    double fa_fxr = fa * fxr;
    tolerancia = anterior_xr - xr;
    if (iterador == 1) {
      tolerancia = 0;
    }
    cout << "|" << setw(10) << iterador << "|" << setw(12) << a << "|" << setw(12) << b << "|"
         << setw(12) << fa << "|" << setw(12) << fb << "|" << setw(12) << xr << "|"
         << setw(12) << fxr << "|" << setw(12) << fa_fxr << "|" << setw(12) << tolerancia << "|" << endl;

    if (fxr > 0) {
      a = xr;
    } else {
      b = xr;
    }
    anterior_xr = xr;
    if (iterador != 1 && tolerancia < toleranciaDeseada) {
      break;
    }
    iterador++;
  }
  cout << "+-----------+-------------+-------------+-------------+-------------+"
         "-------------+-------------+-------------+------------+" << endl;
  return 0;
}
