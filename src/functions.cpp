#include "functions.h"

void showMenu()
{
	cout<<u8"Program memo. MENU\n"
		<<u8"1. Rozpocznij\n"
		<<u8"2. Wprowad� s��wko\n"
		<<u8"3. Usu� s��wko\n"
		<<u8"4. Zako�cz program\n";
}

int choose()
{
	int choose=0;
	cout<<u8"Wybierz numer:\n";
	while( !(cin>>choose) && choose < 5 && choose > 0 )
			{
		cout<<u8"Niepoprawne wejscie. Wybierz ponownie:\n";
		cin.clear();
		while(cin.get() != '\n') continue;
			}
	return choose;
}
