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
        if ( dane1 == "tony" && dane2 == "kilogramy" )
        {
            double dane;
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000;
            cout << dane << " kg";
        }
        else if ( dane1 == "tony" && dane2 == "dekagramy")
          {
            double dane;
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 100000;
            cout << dane << " dag";
          }
        else if ( dane1 == "tony" && dane2 == "gramy")
        {
            double dane;
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 10000000;
            cout << dane << " gram";
        }
        else if ( dane1 == "tony" && dane2 == "miligramy" )
        {
            double dane; //waretosc wyjscowa
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 1000000000;
            cout << dane << " gram";
        }
        else if ( dane1 == "kilogramy" && dane2 == "tony")
        {
          double dane; //waretosc wyjscowa
            cout << "Podaj wartosc kilogramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 0.1000;
            cout << dane << " ton";
        }
        else if ( dane1 == "kilogramy" && dane2 == "dekagramy")
        {
          double dane; //waretosc wyjscowa
            cout << "Podaj wartosc kilogramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 100;
            cout << dane << " ton";
        }
        else if ( dane1 == "kilogramy" && dane2 == "gramy" )
        {
            double dane;
            cout << "Podaj wartosc kilogramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000;
            cout << dane << " gram";
        }
        else if (  dane1 == "kilogramy" && dane2 == "miligramy" )
        {
            double dane;
            cout << "Podaj wartosc kilogramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000000;
            cout << dane << " miligramow";
        }
        else if ( dane1 == "gramy" && dane2 == "tony" )
        {
            double dane;
            cout << "Podaj wartosc gramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z / 1000000;
            cout << dane << " ton";
        }
        else if ( dane1 == "gramy" && dane2 == "kilogram" )
        {
            double dane;
            cout << "Podaj wartosc gramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z / 1000;
            cout << dane << " kilogramow";
        }
        else if ( dane1 == "gramy" && dane2 == "dekagramy")
        {
            double dane;
            cout << "Podaj wartosc gramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.1;
            cout << dane << " dekagramow";
        }
        else if ( dane1 == "gramy" && dane2 == "miligram")
        {
            double dane;
            cout << "Podaj wartosc gramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000;
            cout << dane << " miligram";
        }
        else if ( dane1 == "miligramy" && dane2 == "tony" )
        {
            double dane;
            cout << "Podaj wartosc miligramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.000000001;
            cout << dane << " ton";
        }
        else if ( dane1 == "miligramy" && dane2 == "kilogramy" )
        {
            double dane;
            cout << "Podaj wartosc miligramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.000001;
            cout << dane << " kilogramow";
        }
        else if ( dane1 == "miligramy" && dane2 == "gramy" )
        {
            double dane;
            cout << "Podaj wartosc miligramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.001;
            cout << dane << " gram";
        }
        else if ( dane1 == "miligramy" && dane2 == "dekagramy" )
        {
            double dane;
            cout << "Podaj wartosc miligramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >>  z;
            dane = z * 0.0001;
            cout << dane << " dekagram";
        }
    }
    else if ( instrukcja == "odleglosc" )
    {
     cout << "Wybrano odległosc obslugjemy, kilometry, metry, centymetry, milimetry. (nazwa) " << endl;
        string dane1;
        string dane2;
        double z;
        double na;
        cout << "z czego chcesz przeliczyc?" << endl; //wybor dane1
        getline( cin, dane1 );
        cout << "na: " << endl; //wybor2
        getline( cin, dane2);
        if ( dane1 == "kilometry" && dane2 == "metry" )
        {
            double dane;
            cout << "Podaj wartosc kilometrow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000;
            cout << dane << " m";
        }
        else if ( dane1 == "kilometry" && dane2 == "centymetry")
          {
            double dane;
            cout << "Podaj wartosc ton (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 100000;
            cout << dane << " centymetrow";
          }
        else if ( dane1 == "kilometry" && dane2 == "milimetry")
        {
            double dane;
            cout << "Podaj wartosc kilometrów (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 1000000;
            cout << dane << " milimetrów";
        }
        else if ( dane1 == "metry" && dane2 == "kilometry")
        {
          double dane; //waretosc wyjscowa
            cout << "Podaj wartosc metrów (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 0.1000;
            cout << dane << " kilometry";
        }
        else if ( dane1 == "metry" && dane2 == "centymetry")
        {
          double dane; //waretosc wyjscowa
            cout << "Podaj wartosc metrów (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z; //wartosc wejscowa
            dane = z * 100;
            cout << dane << " centymetrów";
        }
        else if ( dane1 == "metry" && dane2 == "milimetry" )
        {
            double dane;
            cout << "Podaj wartosc metrów (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 1000;
            cout << dane << " milimetry";
        }
        else if (  dane1 == "centymetry" && dane2 == "kilometry" )
        {
            double dane;
            cout << "Podaj wartosc centymetrów (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.100000;
            cout << dane << " kilometrów";
        }
        else if ( dane1 == "centymetry" && dane2 == "metry" )
        {
            double dane;
            cout << "Podaj wartosc centymetry (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z / 100;
            cout << dane << " metrow";
        }
        else if ( dane1 == "centymetry" && dane2 == "milimetry" )
        {
            double dane;
            cout << "Podaj wartosc centymetrow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z / 10;
            cout << dane << " milimetrow";
        }
        else if ( dane1 == "milimetry" && dane2 == "kilometry")
        {
            double dane;
            cout << "Podaj wartosc milimetrów (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.0000001;
            cout << dane << " kiliometrow";
        }
        else if ( dane1 == "milimetry" && dane2 == "metry")
        {
            double dane;
            cout << "Podaj wartosc milimetrow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.0001;
            cout << dane << " metrow";
        }
        else if ( dane1 == "milimetry" && dane2 == "centymetry" )
        {
            double dane;
            cout << "Podaj wartosc miligramow (jesli zmienna jest ulamkiem dziesietnym zapisz czesc dziesietna po kropce (.) nie po przecinku (,)" << endl;
            cin >> z;
            dane = z * 0.1;
            cout << dane << " centymetrow";
        }

    }


    return 0;
}
