#include <iostream>
#include<math.h>
#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("calcular la raiz de un numero");
    printf("dame un numero: ");
float num;
scanf("&f,&num");
float h = 0.00001 , raiz = h;
while(raiz*raiz<num){

    raiz+=h;
}

printf("/n&f,raiz)");

	return 0;
}
