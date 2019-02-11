#include <iostream>

using namespace std;

int main()
{
    string instrukcja;
    cout << "Prosty przelicznik jednostek" << endl;
    cout << "Jaka jednostke chcesz przeliczyc? help-pomoc. ";
    getline( cin, instrukcja );
    if ( instrukcja == "help" ) //wybor pomoc
    {
        cout << "Co obslugujemy? 1.jednostki masy (kg,g,t,itp.) instrukcja = masa ";
        cout << "2.odleglosc (cm,m,km) instrukcja = odleglosc " << endl;
        cout << "rozmiar informatyka (bajt) instrukcja = bajt " << endl;
        cout << "godzina (czas) instrukcja = czas " << endl;
        cout << "predosc instrukcja = predkosc " << endl;
    }
    else if ( instrukcja == "masa" )
    {
        string dane1;
        string dane2;
        double z;
        double na;
        cout << "Wybrano mase obslugjemy tony, kilogrmy, dekagramy, gramy, miligramy. (nazwa) ";
        cout << "z czego chcesz przeliczyc?" << endl; //wybor dane1
        getline( cin, dane1 );
        cout << "na: " << endl; //wybor2
        getline( cin, dane2);
        if ( dane1 == "tony" & dane2 == "kilogramy" )
        {
            double dane;
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000;
            cout << dane << " kg";
        }
        else if ( dane1 == "tony" & dane2 == "dekagramy")
          {
            double dane;
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 100000;
            cout << dane << " dag";
          }
        else if ( dane1 == "tony" & dane2 == "gramy")
        {
            double dane;
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 10000000;
            cout << dane << " gram";
        }
        else if ( dane1 == "tony" & dane2 == "miligramy" )
        {
            double dane; //waretosc wyjscowa
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 1000000000;
            cout << dane << " gram";
        }
        else if ( dane1 == "kilogramy" & dane2 == "tony")
        {
          double dane; //waretosc wyjscowa
            cout << "Podaj wartosc kilogramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 0.1000;
            cout << dane << " ton";
        }
        else if ( dane1 == "kilogramy" & dane2 == "dekagramy")
        {
          double dane; //waretosc wyjscowa
            cout << "Podaj wartosc kilogramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 100;
            cout << dane << " ton";
        }
        else if ( dane1 == "kilogramy" & dane2 == "gramy" )
        {
            double dane;
            cout << "Podaj wartosc kilogramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000;
            cout << dane << " ton";
        }
    }



    return 0;
}
