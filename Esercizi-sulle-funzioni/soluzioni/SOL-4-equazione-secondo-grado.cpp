#include <iostream>
#include <math.h>

using namespace std;

/*
	Scrivere un programma che ricevuti in ingresso i tre parametri a, b e c
	di un trinomio di secondo grado del tipo: ax2+bx+c=0 Utilizzi una funzione
	per il calcolo delle soluzioni del trinomio dato passando alla funzione i
	tre parametri a, b e c per valore e le due radici (soluzioni) x1 e x2 da
	ritornare per indirizzo. 
*/


void func(int A, int B,int C,float &X1, float &X2){
	int delta;
	delta = B * B - 4 * A * C;
	if (delta >= 0) {
		X1 = (-B + sqrt(delta)) / (2*A);
		X2 = (-B - sqrt(delta)) / (2*A);
	} else cout<<"impossibile\n";
}

int main()
{

	int a, b, c;
	float x1 = 0.0, x2 = 0.0;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	func(a, b, c, x1, x2);
	cout << "x1: " << x1 << endl << "x2: " << x2; 

    return 0;
}
