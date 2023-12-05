//zmienne tablicowe zadanie 2
#include <iostream>
using namespace std;
int main(){
	int licz[5];
	cout<< "Wprowadz 5 liczb: ";
	for(int i = 0; i<5; i++){
		cin >> licz[i];
	
	}
	 cout << "W odwrotnej kolejnosci: ";
	 for(int i= 4; i>= 0; --i){
	 	cout << licz[i]  << ", ";
	 }
return 0;




}

