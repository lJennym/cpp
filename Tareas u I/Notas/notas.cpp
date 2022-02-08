#include <iostream>

/*Programade notas para estudiantes de Japon y China, Jennifer Lopez murillo 20192000993 */
using namespace std;
int main(int argc, char** argv) {
	//Declarando variable 
int nota = 0;
//Solicitando el ingreso de datos por parte del usuario
cout << "Ingrese su nota obtenida: ";
cin >> nota;

cout<<"Dependiendo de tu nota obtienes un rango de estudios, pasable,medio, promedio y/o alto"<<endl;
//Realizando la prueba logica (comparacion logica)
if (nota >=96 && nota <=100) {
    cout << "Obtuviste una A++";
} else {
 	if (nota >=91 && nota <= 95) {
    	cout << "Obtuviste una A+";
    } else {
	if (nota >=86 && nota <= 90) {
    		cout << "Obtuviste una A";}
	else {
	if (nota >=81 && nota <= 84) {
    cout << "Obtuviste una  nota alta A";
    }else{
	if (nota >=76 && nota <= 80) {
    cout << "Obtuviste una nota promedio B+";
    } else {
	if (nota >=71 && nota <= 75) {
    cout << "Obtuviste una B";
    } else {
	if (nota >=66 && nota <= 70) {
    cout << "Obtuviste una B";
    	} else {
	if (nota >=61 && nota <= 65) {
    cout << "Obtuviste una C+";
	} else {
	if (nota >=56 && nota <= 60) {
    cout << "Obtuviste una nota pasable  C";
	} else {
	if (nota >=51 && nota <= 55) {
    cout << "Obtuviste una C-";
	} else {
	if (nota >=46 && nota <= 50) {
    cout << "Obtuviste una nota medio de D+";
	} else {
	if (nota >=41 && nota <= 45) {
    cout << "Obtuviste una D";
	} else {
	if (nota >=36 && nota <= 40) {
    cout << "Obtuviste una D-";
	} else {
		if (nota >=31 && nota <= 35) {
    cout << "Obtuviste una E+";
	} else {
	if (nota >=26 && nota <= 30) {
    cout << "Obtuviste una E";
	} else {
	if (nota >=21 && nota <= 25) {
    cout << "Obtuviste una E-";
	} else {
	if (nota >=16 && nota <= 20) {
    cout << "Obtuviste una F+";
    } else {
	if (nota >=6 && nota <= 15) {
    cout << "Obtuviste una F";
	} else {
	if (nota >=1 && nota <=5) {
    cout << "Obtuviste una F-";
	}else {
	if (nota =0 ){
    cout << "Obtuviste una nota muy baja de F--";
    }
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}	
	}
	}
	}
	}									
	}
	
	
	return 0;
}
