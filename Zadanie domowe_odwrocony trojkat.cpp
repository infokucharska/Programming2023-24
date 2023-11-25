#include <iostream>
using namespace std;
int main()
 {
     short a, b, i, j, k;
     cout << " Podaj liczbe szerokosci";
     cin >> a;
     cout << "Podaj liczbe wysokoszczi";
     cin >> b;
    
     for(i=b;  i>=1; i--){
               
     for(j=a; j>i; j--){
              cout<< " "; }
              for(k=1; k<i*2; k++){
                       cout<< "*";
                       }
                       cout<<endl;
                       }
          
         system("pause");
          }