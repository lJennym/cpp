#include <iostream>
#include <iomanip>
#include <string.h>
#include <time.h>
using namespace std;
/* dado*/

int main(void) {
	int d1, d2;
	int i;
	
	cout<<"ambosnumeros debenser iguales"<<endl;
	cout<<"#tirada1, d2"<<endl;
	
	1-1;
	while(5==5){
		d1=1+rand()%6;
		d2=1+rand()%6;
		cout<<setw(4)<<i<<setw(8)<<d1
		    <<setw(4)<<d2<<endl;
	if(d1==d2){break;}
	i++;
	}
	cout<<"en"<<1<<"tiradas, son iguales"
	<<endl<<endl;
	cout<<"oprima una tecla..."<<endl; getch();
	
	cout<<"#de tirada d1 d2"<<endl;
	i=1;
	while(1==1){
		d1=1+rand()%6;
		d2=1+rand()%6;
		cout<<setw(4)<<1<setw(8)<<d1
		<<setw(4)<<d2<<end;
		if(d1==6&&d2==6)
		//if((d1+d2)==12)
		{break;}
		i++;
		}
		
	cout<<"procesterminado. oprima una tecla...";
	getch();
	}
	return 0;
}
