#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumar(){
    return 5 + 7;
}

string nombreCompleto(){
    string nombre = "Jennifer";
    string apellido = "Lopez";

    return nombre + " " + apellido;
}

int main()
{
    int resultado = sumar();
    string nombreyApellido = nombreCompleto();
    cout << resultado;
    cout << endl;
    cout << nombreyApellido;

	return 0;
}