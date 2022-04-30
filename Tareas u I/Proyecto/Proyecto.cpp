#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

/* Reservaciones de hotel: clientes, habitaciones disponibles, fechas de reservacion */

string arreglo[8][3];

int main() {
	system("color 0b");
	     
	arreglo[0][0]="A1";
	arreglo[0][1]="disponible";
	arreglo[0][2]="L. 2000 con vista al mar, 3 noches";
	
	arreglo[1][0]="A2";
	arreglo[1][1]="disponible";
	arreglo[1][2]="L5000 con SPA, masage, vista al mar y sistema de entretenimiento, 3 noches";
	
	arreglo[2][0]="B1";
	arreglo[2][1]="disponible";
	arreglo[2][2]="3400 masaje, entretenimiento promedio y vista la ciudad, 2 noches";
	
	arreglo[3][0]="B2";
	arreglo[3][1]="disponible";
	arreglo[3][2]="2000 entretenimiento basico, 3 noches";
	
	arreglo[4][0]="A3";
	arreglo[4][1]="disponible";
	arreglo[4][2]="4000 masaje, entretenimiento promedio y vista a la playa. 2 noches";
	
	arreglo[5][0]="C1";
	arreglo[5][1]="Reservada";
	arreglo[5][2]="L. 8000 vista turistica principal, Spa, entretenimiento avanzado, masaje, netflix, 3 noches";
	
	arreglo[6][0]="D1";
	arreglo[6][1]="disponible";
	arreglo[6][2]="2000 entretenimiento basico, 3 noches";
	
	arreglo[7][0]="E1";
	arreglo[7][1]="disponible";
	arreglo[7][2]="2000 entretenimiento basico, 3 noches";
	
	int opcion=0;
	string habitacion="";
	while(true){
		system("cls");
		cout<<"Bienvenidos al Hotel la champa"<<endl;
		cout<<"digita una opcion"<<endl;
		cout<<"º._.*._.*._.*._.*._.*._.*._.*._.º"<<endl;
		cout<<"1. Ver habitaciones"<<endl;
		cout<<"2. Ver ocupadas"<<endl;
		cout<<"3. Ver disponibles"<<endl;
		cout<<"4. Ver precios"<<endl;
		cout<<"5. reservar"<<endl;
		cout<<"6. salir"<<endl;
		cin>>opcion;
		
		if (opcion==6)
		{break;
		}
		
		system("cls");
		
		switch(opcion){
			case 1: {
				for(int i=0; i<8; i++){
					cout<<"habitacion: "<<arreglo[i][0]<<", estado: "<<arreglo[i][1]<<endl;
				}
				system("pause");
				break;
			} 
			case 2: {
				cout<<"Introduce el No. habitacion para check in: ";
				cin>>habitacion;
				for(int i=0; i<8; i++){
					if (habitacion == arreglo[i][1]){
						arreglo [i][1] = "reservada";
					}
				}
				break;
			}
			case 3: {
				cout<<"Introduce el No. habitacion para check in: ";
				cin>>habitacion;
				for(int i=0; i<8; i++){
					if (habitacion == arreglo[i][0]){
						arreglo [i][1] = "disponible";
				}
				break;}
			}
			case 4: {
					cout<<"ingresa el no. habitacion para ver su precio: ";
					cin>>habitacion;
					for(int i=0; i<8; i++)
					if (habitacion == arreglo[i][0]){
						arreglo [i][2] = "precios";
					}  break;}
				}
					
					
					}
					

return 0;
}