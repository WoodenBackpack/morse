#include <windows.h>
#include <iostream>
#include<conio.h>
#include "morse.h"

int main()
{
	//Beep(10000, 500000);
	/*
	morse m;
	m.setFrequency(1000);       //ustawienie czestotliwosci dzwieku czyli pierwszy argument Beep()
	m.setPause(50); //Pauza miedzy slowami czas jej trwania czyli drugi argument Beep()
	m.setDotTime(100); //ustawia czas trwania kropki w morsie czyli drugi argument wbudowanej funkcji Beep()
	m.setDashTime(200); // czas trwania kreski w morsie
	m.setCharPause(100); //czas pauzy miedzy literami
	m << "Ala ma kota";// przeciazamy operator << tak, aby wydawal dzwieki morsem
	long i = 0x5A5A5A5A;
	double d = 1.23456789;
	m << i;// << pause << d; //pause jest rowne charpause, jezeli chodzi o slowo pause jest technika, ktora pozwala na wstawianie danego slowa do strumienia
    */
   // std::cin.get(); // wait 
//	return 0;

	
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1245, 1000);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);

std::cout<<std::endl;
_getch();

return 0;

}
