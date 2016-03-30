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

	Wyrazenie.Wprowadz(x, y);
  
  cout << "Start sprawdzianu testu arytmetyki symboli" << endl;
}
