#include <iostream>
using namespace std;
int main(){
	int licz[5];
	cout<< "Wprowadz 5 liczb dodatnich i ujemnych : ";
	for(int i = 0; i<5; i++){
		cin >> licz[i];
	
	}
	 cout << "liczby ujemne zamienione: ";
	 for(int i= 0; i<5; i++){
		 if(licz[i] < 0){
		 		licz[i]=0;
		}
	}
	for(int i=0; i< 5; i++){		
	 	cout << licz[i]  << ", ";
	}




return 0;
}

