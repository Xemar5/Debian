#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH


class Statystyka {

  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol
   */
  unsigned Dzialania = 0;
	unsigned Poprawnie_Zapisane_Dzialania = 0;
	unsigned Poprawne_Dzialania = 0;
	unsigned Dodawania_Lub_Odejmowania = 0;

public:
	unsigned Inkrementuj_Dzialania();
	unsigned Inkrementuj_Poprawnie_Zapisane_Dzialania();
	unsigned Inkrementuj_Poprawne_Dzialania();
	unsigned Inkrementuj_Dodawania_Lub_Odejmowania();
	void Wyswietl_Dane();
};


#endif
