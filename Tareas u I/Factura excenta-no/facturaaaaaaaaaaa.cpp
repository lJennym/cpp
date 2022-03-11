<<<<<<< HEAD
#include <iostream>

/* Factura escenta/nop Jennifer Lopez Murillo 20192000993 */
using namespace std;

int main() {
	
	;
	//Datos de entrada
	 	double subtotal=0;
	 	double total=0;
	 	double impuesto=0;
	 	
	 	cout<<"ingrese el subtotal de la factura: "<<endl;
	 	cin>>subtotal;
	 	
	//proceso
	total=subtotal+(subtotal*0.15);
	
	//salida
	cout<<endl;
	cout<<"total a pagar es: "<<total;
	
	char estaexcenta, calculodeimpuesto;
	
	cout<<"factura excenta? s/n";
	cin>>estaexcenta;
	
	if(estaexcenta=='S'||estaexcenta=='S')
	calculodeimpuesto=0;
	calculodeimpuesto=total*0.15;
	
	return 0;
}

=======
#include <iostream>

/* Factura escenta/nop Jennifer Lopez Murillo 20192000993 */
using namespace std;

int main() {
	
	;
	//Datos de entrada
	 	double subtotal=0;
	 	double total=0;
	 	double impuesto=0;
	 	
	 	cout<<"ingrese el subtotal de la factura: "<<endl;
	 	cin>>subtotal;
	 	
	//proceso
	total=subtotal+(subtotal*0.15);
	
	//salida
	cout<<endl;
	cout<<"total a pagar es: "<<total;
	
	char estaexcenta, calculodeimpuesto;
	
	cout<<"factura excenta? s/n";
	cin>>estaexcenta;
	
	if(estaexcenta=='S'||estaexcenta=='S')
	calculodeimpuesto=0;
	calculodeimpuesto=total*0.15;
	
	return 0;
}

>>>>>>> 3c4e4c1426a2fb216e74594b7af349d95a8df96a
