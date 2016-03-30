#include "../inc/WyrazenieAlgeb.hh"
#include "../inc/dzialania.hh"
#include "../inc/Statystyka.hh"
#include <iostream>
#include <string.h>


/*
 *  Tutaj nalezy zdefiniowac odpowiednie funkcje,
 *  ktore beda okreslac dopuszczalne metody dostepu
 *  i akceptowalny zbior operacji na strukturze WyrazenieAlgeb.
 */



int WyrazenieAlgeb::Wprowadz(Symbol& arg1, Symbol& arg2)
{
char Tab_Symboli[] = {'e','a','b','c','d'};
	
	Symbol wynik;
	char dzialanie;
	char znak_rownosci;

	std::cin >> arg1 >> dzialanie >> arg2 >> znak_rownosci >> wynik;

	if(cin.eof()) return 0;

	if(arg1 == Symbol::blad)
		{std::cerr << "Blad skladni: niepoprawny pierwszy argument\n"; return -3;}
	if(arg2 == Symbol::blad)
		{std::cerr << "Blad skladni: niepoprawny drugi argument\n"; return -3;}
	if(wynik == Symbol::blad)
		{std::cerr << "Blad skladni: niepoprawny wynik argument\n"; return -3;}
	if(!strchr("+-*/", dzialanie))
		{std::cerr << "Blad skladni: niedozwolony operator dzialania\n"; return -3;}
	if(znak_rownosci != '=')
		{std::cerr << "Blad skladni: brak znaku '=' po drugim argumencie\n"; return -3;}
	
	std::cout << "Odczytano: " 
						<< Tab_Symboli[(int)arg1]	<< " " 
						<< dzialanie << " "
						<< Tab_Symboli[(int)arg2] << " = "
						<< Tab_Symboli[(int)wynik] << std::endl;

	if(dzialanie == '+')
	{
		Symbol prawdziwy_wynik = arg1 + arg2;
		if(prawdziwy_wynik == wynik) {std::cout << "Dzialanie poprawne\n"; return 1;}
		else {std::cout << "Wynik niepoprawny; Prawdziwe rozwizanie: "
										<< Tab_Symboli[(int)prawdziwy_wynik]
										<<"\n"; return -1;}
	}
	if(dzialanie == '-')
	{
		Symbol prawdziwy_wynik = arg1 - arg2;
		if(prawdziwy_wynik == wynik) {std::cout << "Dzialanie poprawne\n"; return 1;}
		else {std::cout << "Wynik niepoprawny; Prawdziwe rozwizanie: "
										<< Tab_Symboli[(int)prawdziwy_wynik]
										<<"\n"; return -1;}
	}
	if(dzialanie == '*')
	{
		Symbol prawdziwy_wynik = arg1 * arg2;
		if(prawdziwy_wynik == wynik) {std::cout << "Dzialanie poprawne\n"; return 2;}
		else {std::cout << "Wynik niepoprawny; Prawdziwe rozwizanie: "
										<< Tab_Symboli[(int)prawdziwy_wynik]
										<<"\n"; return -2;}		
	}
	if(dzialanie == '/')
	{
		Symbol prawdziwy_wynik = arg1 / arg2;
		if(arg2 == Symbol::e) return -2;
		if(prawdziwy_wynik == wynik) {std::cout << "Dzialanie poprawne\n"; return 2;}
		else {std::cout << "Wynik niepoprawny; Prawdziwe rozwizanie: "
										<< Tab_Symboli[(int)prawdziwy_wynik]
										<<"\n"; return -2;}		
	}

	return 0;
}

