#include <iostream>

using namespace std;

int main() {
    int horas;

    cout << "=== TARIFA DE ESTACIONAMIENTO ===" << endl;
    cout << "Ingresa la cantidad de horas estacionadas: ";
    cin >> horas;

    
    if (horas <= 0) {
        cout << "Error: El número de horas debe ser mayor a 0." << endl;
    } else if (horas == 1) {
        cout << "Total a pagar: $2" << endl;
    } else if (horas >= 2 && horas <= 5) {
        cout << "Total a pagar: $5" << endl;
    } else { 
        cout << "Total a pagar: $10" << endl;
    }

    return 0;
}
