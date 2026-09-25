#include <iostream>

using namespace std;

int main() {
    double numero;

    cout << "=== CLASIFICACIÓN DE SIGNO ===" << endl;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número " << numero << " es POSITIVO." << endl;
    } else if (numero < 0) {
        cout << "El número " << numero << " es NEGATIVO." << endl;
    } else {
        cout << "El número ingresado es CERO." << endl;
    }

    return 0;
}