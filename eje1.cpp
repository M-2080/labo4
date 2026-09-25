#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "=== CALCULADORA BÁSICA ===" << endl;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa la operación (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    
    if (operacion == '+') {
        cout << "Resultado: " << num1 + num2 << endl;
    } else if (operacion == '-') {
        cout << "Resultado: " << num1 - num2 << endl;
    } else if (operacion == '*') {
        cout << "Resultado: " << num1 * num2 << endl;
    } else if (operacion == '/') {
        
        if (num2 != 0) {
            cout << "Resultado: " << num1 / num2 << endl;
        } else {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
    } else {
        cout << "Error: Operación no válida." << endl;
    }

    return 0;
}