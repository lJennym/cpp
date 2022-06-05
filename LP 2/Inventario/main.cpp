#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string productos [5][3]; = {
{"001", "Tomate", "3"};
{"002", "Cebolla", "4"};
{"003", "Soya", "19"};
{"004", "Camote", "5"};
{"005", "Pistachio", "7"};
};

void listarproductos(){
	system("cls");
		cout<<endl;
	  	cout<<"productos"<<endl;
	  	cout<<"*********************"<<endl;
	  	cout<<"Codigo, descripcion y existencias"<<endl;
	  	cout<<"*********************"<<endl;
	 for (int i=0; i<5; i++)
	   {
	   cout<<productos[i][0]<<"|"<<productos<<"|"<<productos[i][1];
	   }
}

void movimientosdeinventario(string codigo, int cantidad, string tipomovimiento) {
	for(int i=0; i<5; i++)
	if (productos[i][0]== codigo){
	if (tipomovimiento == "+"){
		productos[i][2]=to_string(stoi(productos[i][2]) + cantidad);
	}
	else {productos[i][2]=to_string(stoi(productos[i][2]) - cantidad);
	}
}
}

void ingresodeinventario(){
	string codigo = "";
	int cantidad = 0;
	system("cls");
		cout<<endl;
	  	cout<<"Ingreso de productos al inventario"<<endl;
	  	cout<<"*********************"<<endl;
	    cout<<"ingrese el codigo de producto: ";
	    cin>>codigo;
}

int main(int argc, char** argv) {
	
	int opcion=0;
	
	while(true){
		system("cls");
	
	
	cout<<"Sistema de inventario";
	cout<<endl;
	cout<<"***********************";
	cout<<endl;
	cout<<endl;
	cout<<"1. Productos"<<endl;
	cout<<"2. ingreso de invetario"<<endl;
	cout<<"3, salir"<<endl;
	cout<<"ingresar una opcion: ";
	cin>>opcion;
	
	switch(opcion){
	  case 1: 
	   listarproductos(); 	
	  break;
	  
	  case 2: {
		ingresodeinventario();
	  break;}

	  
	  defaul:
	  	break;
	  	
	  	system("pause");
	  	cout<<endl;
}
if (opcion==4){
	break;
}
	

}
	return 0;
}