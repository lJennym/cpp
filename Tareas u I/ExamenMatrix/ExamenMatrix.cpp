#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int Modulus(int iN, int iMod) {
	int iQ = (iN/iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

int main() {
	string contrasena;
	
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> contrasena;
	
	if (contrasena == "smith") {
		system("COLOR 02");

		char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;

		while (true) {
			int i = 0;
			
			// caracteres aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			// incremente el valor de 3000000 para retrasar el proceso
			i = 0;
			while (i < 300000) {
				GetChar(1, 1, 1);
				 ++i;
			}
		}		
	} 
	  if(contrasena == "neo"){
	  	system("COLOR 02");

		char caRow[10];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;

		while (true) {
			int i = 0;
			
			// caracteres aleatorios
			while (i < 10) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 10)] = '-';
			caRow[Modulus(k, 10)] = ' ';
			caRow[Modulus(l, 10)] = '-';
			caRow[Modulus(m, 10)] = ' ';
			
			// incremente el valor de 10 para retrasar el proceso
			i = 0;
			while (i < 10) {
				GetChar(1, 1, 1);
				 ++i;
			}
		}	
		cout<<"Hubo un error en el sistema";	
	} else {
		cout << "acceso a la matrix denegado";
	  }

	return 0;
}
