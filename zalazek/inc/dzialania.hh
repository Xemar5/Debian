#include <iostream>
#include "Symbol.hh"

using namespace std;

/*
  Definicja typu wyliczeniowego "Symbol" dla symboli  a, b, c, d, e.
*/
Symbol Tablica_Dodawania[5][5] = {
{Symbol::e,Symbol::a,Symbol::b,Symbol::c,Symbol::d},
{Symbol::a,Symbol::d,Symbol::e,Symbol::b,Symbol::c},
{Symbol::b,Symbol::e,Symbol::c,Symbol::d,Symbol::a},
{Symbol::c,Symbol::d,Symbol::b,Symbol::a,Symbol::e},
{Symbol::d,Symbol::c,Symbol::a,Symbol::e,Symbol::b}};

Symbol Tablica_Mnozenia[5][5] = {
{Symbol::e,Symbol::e,Symbol::e,Symbol::e,Symbol::e},
{Symbol::e,Symbol::a,Symbol::b,Symbol::c,Symbol::d},
{Symbol::e,Symbol::b,Symbol::a,Symbol::d,Symbol::c},
{Symbol::e,Symbol::c,Symbol::d,Symbol::b,Symbol::a},
{Symbol::e,Symbol::d,Symbol::c,Symbol::a,Symbol::b}};

/*
  Definicja funkcji: Dodaj, PrzeciwnyDodawania, Odejmij, Mnoz, OdwrotnyMnozenia, Dziel.
*/
Symbol Dodaj(Symbol arg1, Symbol arg2)
{
	return Tablica_Dodawania[(int)arg1][(int)arg2];
}
Symbol operator+ (Symbol arg1, Symbol arg2)
{
	return Tablica_Dodawania[(int)arg1][(int)arg2];
}


Symbol Przeciwna(Symbol arg)
{
	int i = 0;
	while(Tablica_Dodawania[i][(int)arg] != Symbol::e) i++;
	if(i >= 5)
	{
		cout << "Symbol nie zawiera podanego elementu" << endl;
		return Symbol::blad;
	}
	return Tablica_Dodawania[i][0];
}
Symbol operator-(Symbol arg)
{
	int i = 0;
	while(Tablica_Dodawania[i][(int)arg] != Symbol::e) i++;
	if(i >= 5)
	{
		cout << "Symbol nie zawiera podanego elementu" << endl;
		return Symbol::blad;
	}
	return Tablica_Dodawania[i][0];
}


Symbol Odejmij(Symbol arg1, Symbol arg2)
{
	arg2 = Przeciwna(arg2);
	return Dodaj(arg1,arg2);
}
Symbol operator-(Symbol arg1, Symbol arg2)
{
	arg2 = Przeciwna(arg2);
	return Dodaj(arg1,arg2);
}






Symbol Mnoz(Symbol arg1, Symbol arg2)
{
	return Tablica_Mnozenia[(int)arg1][(int)arg2];
}
Symbol operator*(Symbol arg1, Symbol arg2)
{
	return Tablica_Mnozenia[(int)arg1][(int)arg2];
}

Symbol Odwrotna(Symbol arg)
{
	if(arg == Symbol::e)
	{
		cout << "Nie dziel przez e!" << endl;
		return Symbol::blad;
	}
	int i = 1;
	while(Tablica_Mnozenia[i][(int)arg] != Symbol::a) i++;
	if(i >= 5)
	{
		cout << "Symbol nie zawiera podanego elementu" << endl;
		return Symbol::e;
	}
	return Tablica_Dodawania[i][0];	
}
void operator/=(Symbol& wyn, Symbol arg)
{
	if(arg == Symbol::e)
	{
		cout << "Nie dziel przez e!" << endl;
		return void();
	}
	int i = 1;
	while(Tablica_Mnozenia[i][(int)arg] != Symbol::a) i++;
	if(i >= 5)
	{
		cout << "Symbol nie zawiera podanego elementu" << endl;
		return void();
	}
	wyn = Tablica_Dodawania[i][0];	
}

Symbol Podziel(Symbol arg1, Symbol arg2)
{
	arg2 /= arg2;
	return arg1 * arg2;
}
Symbol operator/(Symbol arg1, Symbol arg2)
{
	arg2 /= arg2;
	return arg1 * arg2;
}


/*
  Definicja przeciążeń operatorówhttps:rab//www.dropbox.com/home?preview=Miernictwo.docx
*/
void Porownaj(Symbol wynik_alg, Symbol wynik_ope, Symbol wynik_fun)
{
 cout << ((wynik_alg == wynik_fun) ? "Identyczne" : "Rozne") 
      << " wyniki wyrazenia algebraicznego i funkcyjnego." << endl;

 cout << ((wynik_ope == wynik_fun) ? "Identyczne" : "Rozne") 
      << " wyniki wyrazenia operatorowego i funkcyjnego." << endl;

 cout << ((wynik_ope == wynik_alg) ? "Identyczne" : "Rozne") 
      << " wyniki wyrazenia operatorowego i algebraicznego." << endl;
}


