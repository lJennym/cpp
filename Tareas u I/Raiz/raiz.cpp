#include<stdio.h>
#include<math.h>
#include <iostream>
int main(){
    printf("calcular la raiz de un numero");
    printf("dame un numero: ");
float num;
scanf("&f,&num");
float h = 0.00001 , raiz = h;
while(raiz*raiz<num){

    raiz+=h;
}

printf("/n&f,raiz)");
}
