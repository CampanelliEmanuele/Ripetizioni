#include <iostream>

using namespace std;

/*
	Scrivere un programma che dato in input il raggio di un cerchio
	ne stampi l'area utilizzando una funzione che restituisce il valore
	dell'area attraverso un passaggio per indirizzo. 
*/

void areaCerchio(float r, float &a){
	a = (float)(r * r * 3.14); 
}
int main()
{
	cout << "Inserire il raggio del cerchio: ";
	// area va inizializzato ad un valore (in questo caso 0) affinche' non si abbia un errore
	// quando lo si passa alla funzione come parametro attuale.
	float raggio, area = 0;		
	cin >> raggio;
	areaCerchio(raggio, area);
	cout << "L'area del cerchio e': " << area; 
    return 0;
}
