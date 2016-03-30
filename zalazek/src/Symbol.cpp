#include "../inc/Symbol.hh"
#include <string.h>

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
	}
	
	return is;
}

