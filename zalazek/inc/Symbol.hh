#ifndef SYMBOL_HH
#define SYMBOL_HH
#include <iostream>

enum class Symbol { e, a, b, c, d, blad };

std::istream& operator>>(std::istream& is, Symbol& sym);

#endif
