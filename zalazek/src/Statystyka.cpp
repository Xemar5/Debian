#include "../inc/Statystyka.hh"
#include <iostream>

/*
 *  Tutaj nalezy zdefiniowac odpowiednie funkcje,
 *  ktore beda okreslac dopuszczalne metody dostepu
 *  i akceptowalny zbior operacji na strukturze Statystyka.
 */

unsigned Statystyka::Inkrementuj_Dzialania()
{
	return ++Dzialania;
}
unsigned Statystyka::Inkrementuj_Poprawnie_Zapisane_Dzialania()
{
	return ++Poprawnie_Zapisane_Dzialania;
}
unsigned Statystyka::Inkrementuj_Poprawne_Dzialania()
{
	return ++Poprawne_Dzialania;
}
unsigned Statystyka::Inkrementuj_Dodawania_Lub_Odejmowania()
{
	return ++Dzialania;
}




void Statystyka::Wyswietl_Dane()
{
	std::cout
	<< "Statystyka:\n"
	<< "Ilosc wszystkich wyrazen: " << Dzialania << std::endl
	<< "Ilosc poprawnie zapisanych wyrazen: " << Poprawnie_Zapisane_Dzialania << std::endl
	<< "Ilosc wyrazen z poprawnym wynikiem: " << Poprawne_Dzialania << std::endl
	<< "Procentowo ilosc poprawnych wynikow: "
		<< ((double)Poprawne_Dzialania / (double)Poprawnie_Zapisane_Dzialania)*100 << "%\n"
	<< "Ilosc operacji odejmowania i dodawania: " << Dodawania_Lub_Odejmowania << std::endl
	<< "Ilosc operacji mnozenia i dzielenia: " 
		<< Poprawnie_Zapisane_Dzialania - Dodawania_Lub_Odejmowania << std::endl;
}

