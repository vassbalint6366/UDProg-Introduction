#include "std_lib_facilities.h"

int main()
{
	cout << endl;
	cout << "------------------------------------------------------------------------" << "\n\n";
	int birth_year = 2002;
	cout << birth_year << "\t(decimal)\n"
	<< hex << birth_year << "\t(hexadecimal)\n"
	<< oct << birth_year << "\t(octal)\n"
	<< dec << endl;
	
	cout << "------------------------------------------------------------------------" << "\n\n";

	cout << "With showbase:\n";

		cout << showbase; 				// számrendszer alapja
		cout << birth_year << "\t(decimal)\n" 		// nincs
		<< hex << birth_year << "\t(hexadecimal)\n" 	// 0x
		<< oct << birth_year << "\t(octal)\n" 		// 0
		<< dec << endl;

	cout << noshowbase << dec;

	cout << "------------------------------------------------------------------------" << "\n\n";

/*
	int a, b, c, d;
	cin >> a >>oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;
*/

	cout << defaultfloat <<  1234567.89 << "\t(defaultfloat)\n";
	cout << fixed << 1234567.89 << "\t(fixed)\n";
	cout << scientific << 1234567.89 << "\t(scientific)\n";
	cout << endl;


	cout << "------------------------------------------------------------------------" << "\n\n";

	cout << '|' << setw(10) << "Bálint" << '|' << setw(6) << "Vass" << '|' <<  setw(13) << "066006600660" << '|' << setw(20) << "tnilabv@freebox.hu" << '|';
	cout << endl;
	cout << '|' << setw(10) << "Barátom" << '|' << setw(6) << "Neve" << '|' <<  setw(13) << "600660066006" << '|' << setw(20) << "motarabn@freebox.hu" << '|';




	cout << "\n\n" << "------------------------------------------------------------------------" << "\n\n";
	return 0;
}