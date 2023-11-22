# Método de la Regla Falsa en C++

Este programa en C++ implementa el Método de la Regla Falsa para encontrar las raíces de una ecuación dada. En el ejemplo proporcionado, la ecuación es f(x) = x^2 - 4.

## Requisitos

- Compilador de C++ compatible con el estándar C++11.
- Make (opcional, pero útil para compilar y ejecutar).

## Compilación y Ejecución

Para compilar y ejecutar el programa, sigue estos pasos:

1. Abre una terminal y navega al directorio del proyecto.
2. Ejecuta el siguiente comando para compilar el programa:

    ```bash
    make run
    ```

    o

    ```bash
    g++ -std=c++11 -Wall src/reglafalsa.cpp -o reglafalsa -lm
    ```

3. Después de la compilación, ejecuta el programa con el siguiente comando:

    ```bash
    ./bin/reglafalsa
    ```

## Personalización

- Puedes cambiar la ecuación en la función `resolverEcuacion` en el archivo `reglafalsa.cpp`.
- Ajusta los valores iniciales de `a` y `b` según tus necesidades.

## Contribuir

Si encuentras errores o tienes mejoras que sugerir, siéntete libre de abrir un problema o enviar un pull request.

## Licencia

Este proyecto está licenciado bajo la [Licencia MIT](LICENSE).
