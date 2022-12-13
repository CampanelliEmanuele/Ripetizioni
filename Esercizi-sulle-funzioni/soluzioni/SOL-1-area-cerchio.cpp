#include <iostream>

using namespace std;

/*
	Scrivere un programma che dato in input il raggio di un cerchio ne stampi
	l'area utilizzando una funzione che riceve il raggio dal programma
	principale attraverso un passaggio per valore. 
*/


float areaCerchio(float r) {
	return (float)(r * r * 3.14);
}

int main()
{
	cout << "Inserire il raggio del cerchio: ";
	float raggio;
	cin >> raggio;
	cout << "L'area del cerchio e': " << areaCerchio(raggio); 
    return 0;
}
