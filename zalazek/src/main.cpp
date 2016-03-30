#include <iostream>
#include "../inc/WyrazenieAlgeb.hh"
#include "../inc/Statystyka.hh"
#include "../inc/Symbol.hh"

using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
  Symbol           x, y;    // To tylko przykladowe definicje zmiennych
  Statystyka       Stat;
  WyrazenieAlgeb   Wyrazenie;

	while(int flag = Wyrazenie.Wprowadz(x, y))
	{
		++Stat.Dzialania;
		if(flag != -3) ++Stat.Poprawnie_Zapisane_Dzialania;
		if(flag > 0) ++Stat.Poprawne_Dzialania
		if(flag == 1 || flag == -1) ++Stat.Dodawania_Lub_Odejmowania
	}
  
  cout << "Start sprawdzianu testu arytmetyki symboli" << endl;
}
