#include <iostream>
#include <iostream>
#include <stdio.h>
/* Jennifer Lopez Murillo 20192000993 conversor monetario*/
using namespace std;
int main() 
{ int op;
float subtotal, result,precio;

   cout<<"***Bienvenido a catracholandia escojadesde nuestro menu: ***"<<endl;
   cout<<"1. comidas"<<endl;
   cout<<"2. Bebidas frias"<<endl;
   cout<<"3. bebidas calientes"<<endl;
   cout<<"4. panes"<<endl;
   cout<<"5. chucherias"<<endl;
   cout<<"6. factura"<<endl;
   cout<<"ingrese una opcion"<<endl;
   cout<<"*...*....*...*....*....*...*....*....*..*"<<endl;
   cin>>op;
	
   
   
   switch(op){
   	   case 1: 
   	          switch(op){
			case 1: 
		 	   addop("1. pollo con tajadas-l65"1,65);
   	        break;
			case 2:
			   addop("2. hotdog - l20"2,20);
   	          break;
			case 3: 
				 addop("3. baleadas -l15"3,15);
   	          break;}break;
   	          
       case 2: 
              swith(op){
              	case 1: 
			  addop("1. coca-cola lata - l12"1, 12);
   	          break;
				 case 2:
				 addop("2. pepsi lata - l11"2 11);
   	          break;
				 case 3: 
				 addop("3. jugo de naranja -l5"3,15);
   	          break;} break;
              
       case 3:
       	      switch (op){
				 case 1:
				 addop("1. cafe capuccino-l12"1,12);
   	          break;
				 case 2:
				 addop("2. late -115"2,15);
   	          break;
				 case 3:
				 addop("3. te verde - l13"3,13);
   	         break;
				case 4:
				 addop("4. chocolate -l14"4,14);
   	          break;} break;
       	      
       case 4:
       	      switch (op)
				 case 1:
				 addop("1. cemitas - l8"1, 8);
   	          break;
				 case 2:
				 addop("2. galletas - l5"2,5);
   	          break;
				 case 3:
				 addop("3.torta de leche -ll5"3,15);
   	          break;} break;
       	      
       case 5:
      	      switch(op)
				case 1:
				addop("1. churros - l12"1, 12);
   	          break;
				 case 2:
				 addop("2. tostitos - l11"2 11);
   	          break;
				 case 3:
				 addop("3.barra de chocolate -l5"3,15);
   	          break;}break;
      	      
       case 6:
       	      cout<<"facturas"<<endl;
       	      cout<<":D :D :D :D :D :D :D :D :D :D"<<endl;
       	      cout<<"ingrese elprecio de su proucto: "<<endl;
       	      cout<<":v :v :v :v :v :v :v :v :v :v"<<endl;
       	      cin>>moneda;
       	      result=precioa *0.15;
       	      cout<<"L. "<<result;
       	      break;
}
	
	return 0;
}
