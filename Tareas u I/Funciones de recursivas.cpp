#include <iostream>

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
    cout << "�Adivinaste!" << endl;
}

else{
    cout << "Intento fallido con " << miNumero << endl;
    int otroNumero = 0;
    cout << "Ingrese otro numero: " << endl;
    cin >> otroNumero;
    adivinarNumeroSecreto(otroNumero);
}

int main()
{
    adivinarNumeroSecreto(5);

    return 0;
}