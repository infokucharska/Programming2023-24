//jenowymiarowe tablice 
//typ _zmiennej nazwa [liczba elementów] 
// np int tablica[5]
// tablica[0]= "a"; [1]="b";  .....
// zawsze zapisujemy od 0

//int liczba[10];
// for(i+0; i<10; i++){ cin>> liczba[i];


//tabice dwuwymiarowe
#include <iostream>
using namespace std;
int main(){
	int licz[5];
	cout << "Wprowadz 5 liczb: ";
	for(int i=0; i<5; i++){
			cin >> licz[i]; 
			}
			
	cout<< "Liczby parzyste: ";
	for(int i=0; i<5; i++) {
		if(licz[i]%2==0){
			cout<< licz[i]<< ", ";
		}
		
	}
	}
		
		
	
	
	
	 
