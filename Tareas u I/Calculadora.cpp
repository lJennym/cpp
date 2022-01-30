#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{using namespace std;
int op;
	int a=0;
	int b=0;
	
float suma, resta, multiplicacion, division, numero;

   cout<<"***Bienvenido a calculadora basica***"<<endl;
   cout<<"escoge la opcion que deseas ejecutar"<<endl;
   cout<<"1. Sumar"<<endl;
   cout<<"2. Restar"<<endl;
   cout<<"3. Multiplicar"<<endl;
   cout<<"4. Dividir"<<endl;
   cout<<"*...*....*...*....*....*...*....*....*..*"<<endl;
   cin>>op;
	
	switch(op){
   	   case 1: 
   	          cout<<"Suma"<<endl;
   	          cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
   	          cout<<"ingrese el primer numero: "<<endl;
   	          cin>>a;
   	          cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
   	          cout<<"Ingrese el segundo numero: "<<endl;
   	          cin>>b;
   	          suma= a+b;
   	          cout<<"la suma es de:  "<<suma;
   	          break;
   	          
       case 2: 
              cout<<"Resta" <<endl;
              cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
   	          cout<<"ingrese el primer numero: "<<endl;
   	          cin>>a;
   	          cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
   	          cout<<"Ingrese el segundo numero: "<<endl;
   	          cin>>b;
   	          resta= a-b;
   	          cout<<"su resta es de:  "<<resta;
   	          break;
              
       case 3:
       	      cout<<"Multiplicacion"<<endl;
       	      cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
   	          cout<<"ingrese el primer numero: "<<endl;
   	          cin>>a;
   	          cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
   	          cout<<"Ingrese el segundo numero: "<<endl;
   	          cin>>b;
   	          multiplicacion= a*b;
   	          cout<<"su multiplicacion es de: "<<multiplicacion;
   	          break;
       	      
       case 4:
       	      cout<<"Division"<<endl;
       	      cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
   	          cout<<"ingrese el primer numero: "<<endl;
   	          cin>>a;
   	          cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
   	          cout<<"Ingrese el segundo numero: "<<endl;
   	          cin>>b;
   	          division= a/b;
   	          cout<<"la division total es de:  "<<division;
   	          break;}
	
	return 0;
}
