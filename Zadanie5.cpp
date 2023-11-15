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
			if(i== 0 || i== b-1)
			cout << "-";
			else if(j== 0|| j== a-1) 
			cout << "|";
			 else
			 cout << "#";
			 //dorobic program, musimy srodek wykonac w szhownice ?? nie rozumiem nic bozeeeeeeeee
			 
		}
		cout << endl;
	}
system("pause");
}