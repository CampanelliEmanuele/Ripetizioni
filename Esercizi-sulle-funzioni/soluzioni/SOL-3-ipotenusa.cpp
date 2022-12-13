#include <iostream>
#include<math.h>

using namespace std;

/*
	Scrivere un programma che dato in input base altezza di un triangolo rettangolo
	passi tali valori ad una funzione attraverso la quale si possano stabilire ipotenusa,
	area e perimetro del triangolo. 
*/


void func(float b, float h,float &i,float &p, float &a){
	i = sqrt(b * b + h * h);
	p = a + h + i;
	a = (b * h) / 2;
}

int main()
{

	float base,altezza;
	float area = 0.0, ipotenusa = 0.0, perimetro = 0.0;
	cout << "Inserire la base: ";    cin >> base;
	cout << "Inserire l'altezza: "; cin >> altezza;
	func(base, altezza, ipotenusa, perimetro, area);
	cout << ipotenusa << " " << perimetro << " " << area; 

    return 0;
}
