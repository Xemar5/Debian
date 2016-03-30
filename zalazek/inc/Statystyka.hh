#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH


struct Statystyka {

  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol
   */
  unsigned Dzialania = 0;
	unsigned Poprawnie_Zapisane_Dzialania = 0;
	unsigned Poprawne_Dzialania = 0;
	unsigned Dodawania_Lub_Odejmowania = 0;

	void Wyswietl_Dane();
};


#endif
