#include <iostream>

using namespace std;

/*
	Definizione matematica del fattoriale
	fattoriale(x) = x * fattoriale(x-1)
	fattoriale(1) = fattoriale(0) = 1
	Dominio di x = [numeri naturali]
  
	Esempio:
		fattoriale(4) = 4*3*2*1 
*/

int fattoriale(int num) {
	int risultato = 1;
	for (int i = num; i > 0; i--) {
		risultato *= i;
	}
	return risultato;
}


int main()
{
    int num;
    cout << "Inserire un numero: ";
    cin >> num;

    cout << "Il fattoriale del numero inserito e': " << fattoriale(num);
    
    return 0;
}
