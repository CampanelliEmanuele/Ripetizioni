#include <iostream>

using namespace std;

/*
  //Dato un array di dimensione 10 riempito random con numeri tra 0 e 10 si crei:
  una funzione che calcoli la media
  una funzione che verifichi se esiste un valore uguale alla parte intera della media (restituisce true o false)
*/
float media(float vet[], float &somma, int lunghezza) {
	for (int i=0; i<lunghezza; i++){
  	somma += vet[i];
  }
  return somma/lunghezza;
}

int main()
{
	float somma = 0;
	int lunghezza = 5;
	float vet[lunghezza] = {1.0, 2.0, 3.0, 4.0, 5.0};
	
	cout << media(vet,somma,lunghezza);

}