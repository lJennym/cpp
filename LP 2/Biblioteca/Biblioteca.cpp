#include <iostream>
using namespace std;
/* Biblioteca Catracha */
	
	string libros[3][3];
	
	void cargarlibros(){
		libros[0][0]="Perfume";
		libros[0][1]="Patrick Sushkind";
		
		libros[1][0]="Exodo";
		libros[1][1]="Noeh";
		
		libros[2][0]="Bill Gates";
		libros[2][2]="Camino al futuro";
	
	}
	
	int main() {
		cargarlibros();
		 bool salir = false; 
	
	while (salir == false) {
		string buscar = "";
		system("cls");
		cout<<"ingrese descripcion del libro que busca: ";
		cin>>buscar;
		
		//buscar
		
		if(salir==false) {
			char continuar = 'n';
			while(true){
				system("cls");
				cout << "no esta el libro que quieres, ¿quieres continuar? s/n: ";
				cin>>continuar;
				
				if(continuar=='s' || continuar=='S') {
					break;
				} 
				else (continuar=='n' || continuar=='N') {
					salir==true;
					break;
				}
			}
		}
	}
		 
	
	return 0;
}