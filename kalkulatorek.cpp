#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
/*
                                                       ------------- WYKONA£ SZYMON TYFEL -------------
*/
int main() {
float a=0,b=0,i=0,stopien=0,silnia=1;
int dzialanie=0;
cout <<"=========================================================================" << endl;
cout << "Witaj! \nJakie chcesz wykonac dzialanie ?: " << endl;
cout << "~Legenda : \n 1 = dodawanie \n 2 = odejmowanie \n 3 = mnozenie \n 4 = dzielenie \n 5 = potegowanie \n 6 = pierwiastkowanie \n 7 = silnia" << endl;
cout <<"=========================================================================" << endl;
cin  >> dzialanie;
if (dzialanie == 1)
     {
         cout<< "Podaj 2 liczby " << endl;
         cin >> a >> b ;
         cout << "Wynik z dodawania liczby 1 do liczby 2 : " << a+b << "\n\n"<<endl;
     }
     else if ( dzialanie == 2 )
     {
      cout<< "Podaj 2 liczby " << endl;
         cin >> a >> b ;
         cout << "Wynik z odejmowania liczby 1 od liczby 2 : " << a-b <<"\n\n"<<endl;
     }
     else if (dzialanie == 3)
     {
          cout<< "Podaj 2 liczby "<< endl;
         cin >> a >> b ;
         cout << "Wynik z mnozenia liczby 1 przez liczbe 2 : " << a*b <<"\n\n"<<endl;
     }
     else if (dzialanie == 4 )
     {
          cout<< "Podaj 2 liczby "<< endl;
         cin >> a >> b ;
         cout << "Wynik z dzielenia liczby 1 przez liczbe 2 : " << a/b << "\n\n"<<endl;
     }
else if (dzialanie == 5 )
     {
       cout<< "Podaj liczbe "<< endl;
         cin >> a ;
    cout << "Podaj potege : " << endl;
    cin >> b;
         cout << "Wynik z Potegowania : " << pow (a,b) << "\n\n"<<endl;
     }
      else if (dzialanie == 6 )
     {
         cout<< "Podaj liczbe " << endl;
         cin >> a ;
         cout << "Podaj stopien pierwiastkowania : " << endl;
         cin >> stopien ;
         cout << "Wynik pierwiastkowania : " << pow(a, 1/stopien) << "\n\n"<<endl;
     }
      else if (dzialanie == 7 )
     {
         cout<< "Podaj liczbe " << endl;
         cin >> a ;
         do {
         i = i + 1;
         silnia = silnia * i;
} while (i < a);
        cout << "Wynik z silni liczby 1 : " << silnia << "\n\n"<<endl;
     }
    else {
     cout << " Nie rozpoznano dzialania" << "\n\n"<<endl;
}



return main();
}
