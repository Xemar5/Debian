#include <iostream>
#include "WyrazenieAlgeb.hh"
#include "Statystyka.hh"
#include "Symbol.hh"

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

	std::cout << "\nPawel Stolarczyk\nWprowadz Rownanie w postaci x+y=z, gdzie:\n"
							 "x - pierwszy argument\n"
							 "y - drugi argument\n"
							 "z - twoj wynik\n"
							 "+ - dowolny operator ( + - * lub / )\n"
							 "ctrl + D, aby zakonczyc wpisywanie rownan\n";

	while(int flag = Wyrazenie.Wprowadz(x, y))
	{
		Stat.Inkrementuj_Dzialania();
		if(flag != -3) Stat.Inkrementuj_Poprawnie_Zapisane_Dzialania();
		if(flag > 0) Stat.Inkrementuj_Poprawne_Dzialania();
		if(flag == 1 || flag == -1) Stat.Inkrementuj_Dodawania_Lub_Odejmowania();
	}

	Stat.Wyswietl_Dane();
  
  cout << "Koniec programu\n" << endl;
}
