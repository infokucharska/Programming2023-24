#include <iostream>
using namespace std;

int main(){
	short a, b;
	cout<< "Podaj liczbe szerokosci: ";
	cin >> a;
	cout << "Podaj liczbe wysokosci: ";
	cin >> b;
	
	for(int i = 0; i < b; i++){
		for(int j = 0; j < a; j++){
			cout << "%";
		}
		cout << endl;
	}
system("pause");
}






