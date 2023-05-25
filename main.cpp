#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double valorPi = {3.141592}; // Valor de pi al que quiero llegar.
    double i;
    double signo = 1;
    double pi = 0;

    for (i = 1; ; i += 2) { //Incremento cada iteracion en 2 para obtener numeros impares.
        double termino = signo * (1 / i);
        pi += termino;
        signo = -signo;

       //Leibz calcula pi/4, por lo tanto multiplico pi*4 para obtener solo el valor de pi.
        if (abs(pi * 4 - valorPi) < 0.0000001) {  // Verifico si tengo la precision pedida en el ej.
            break;
        }
    }

    cout << "El valor aprox de pi es: " << setprecision(6) << fixed << pi * 4 << endl;

    return 0;
}