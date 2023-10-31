#include <iostream>
using namespace std;

int main(){
	// liczby calkowite - short, long, int, unsignet short
	short a, b;
	cout<< "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	
	//instrukcja warunkowa - if(warunek)
	if(a > b){// jezeli warunek sie spelni to wykona to co jest w klamrach
	cout << a <<" > " << b;// cout<< zmienna<< "tekst" << zmienna;
	}
	else if(a == b){// jezeli warunek powuzej zwroci falsz to sprawdza kolejny warunek
	// = jest operator przepisania 
	// == operator porownania
	// != nie rowne 
	cout << a << " ==  " << b;
	}
	else{//jezeli zaden z warunkow sie nie spelni to wukonuje inne- else
	cout << a << " <  " << b;
	}
	
	
	
	cout << endl; 
system("pause");
}