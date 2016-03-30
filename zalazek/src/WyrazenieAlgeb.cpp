#include "../inc/WyrazenieAlgeb.hh"
#include "../inc/Symbol.hh"
#include "../inc/Statystyka.hh"
#include <iostream>
#include <string.h>


/*
 *  Tutaj nalezy zdefiniowac odpowiednie funkcje,
 *  ktore beda okreslac dopuszczalne metody dostepu
 *  i akceptowalny zbior operacji na strukturze WyrazenieAlgeb.
 */

std::istream& operator>>(std::istream& is, Symbol& sym)
{
	Symbol tab[] = {Symbol::a,Symbol::b,Symbol::c,Symbol::d,Symbol::e};
	char znak;
	is >> znak;
	if(strchr("abcde", znak))
	{
		sym = tab[znak-'a'];
	}
	else
	{
		sym = Symbol::blad;
		is.unget();
		is.setstate(std::ios::failbit);
	}
	
	return is;
}


int WyrazenieAlgeb::Wprowadz(Symbol& arg1, Symbol& arg2)
{
char Tab_Symboli[] = {'e','a','b','c','d'};
	
	Symbol wynik;
	char dzialanie;
	char znak_rownosci;
	std::cin >> arg1 >> dzialanie >> arg2 >> znak_rownosci >> wynik;
	
	if(arg1 == Symbol::blad)
		{std::cerr << "Blad skladni: niepoprawny pierwszy argument\n"; return -1;}
	if(arg2 == Symbol::blad)
		{std::cerr << "Blad skladni: niepoprawny drugi argument\n"; return -1;}
	if(wynik == Symbol::blad)
		{std::cerr << "Blad skladni: niepoprawny wynik argument\n"; return -1;}
	if(!strchr("+-*/", dzialanie))
		{std::cerr << "Blad skladni: niedozwolony operator dzialania\n"; return -1;}
	if(znak_rownosci != '=')
		{std::cerr << "Blad skladni: brak znaku '=' po drugim argumencie\n"; return -1;}
	
	std::cout << "Odczytano: " 
						<< Tab_Symboli[(int)arg1]	<< " " 
						<< dzialanie << " "
						<< Tab_Symboli[(int)arg2] << " = "
						<< Tab_Symboli[(int)wynik] << std::endl; 

	return true;
}

