#include <iostream>
#include <string>

using namespace std;

string insertarCaracterEntreLetras(string cadena, char caracter) {
    string resultado;

    for (size_t i = 0; i < cadena.length(); ++i) {
        resultado += cadena[i];

        if (i < cadena.length() - 1) {
            resultado += caracter;
        }
    }

    return resultado;
}

int main() {
    string cadena;
    char caracter;

    cout << "Ingrese una cadena: ";
    cin >> cadena;
    cout << "Ingrese un carácter: ";
    cin >> caracter;

    string resultado = insertarCaracterEntreLetras(cadena, caracter);

    cout << "Cadena con el carácter insertado: " << resultado << endl;

    

return 0;
}