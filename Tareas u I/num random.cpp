#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
    int numero = 0;

    //inicia un numero random entre 1 y 10
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        //genera un numero entre 1 y 10
    numero = rand() % 10 + 1;
    cout <<"Numero al azar: " << numero <<endl;
    }
    return 0;

}
