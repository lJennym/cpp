#include<iostream>
#include<windows.h>
#include "juego.h"

using namespace std;

#define ARRIBA 72
#define IZQUIERDA 75
#define ABAJO 80
#define DERECHA 77
#define ESC 27


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char tecla;
	int puntos=0;
	int xpos=30,ypos=20; 
	
	iniializar arreglo();
	dificultad();
	gotoxy(50,2)
	cout<< puntos;
	pintar();
	gotoxy(xpos,ypos);cout<<(char)4;
	
while(tecla!=Esc&&gameover()){
	proceso(tecla, puntos);}

if(!gameover()){
	messagebox(null,"perdiste, looser"mb_ok);
	system("cls");)}
	
	system("pause<Null");
	return 0;
}
