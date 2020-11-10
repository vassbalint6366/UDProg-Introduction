#include "std_lib_facilities.h"

void swap_v(int a, int b)
// csak a másolatát kezeli
{
	int temp = a;
	a = b;
	b = temp;
}

/*
void swap_r(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
*/
//DOUBLE-T AZ INT NEM TUD KEZELNI!

/*
void swap_cr(const int& a, const int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
*/
//CONST MIATT NEM LEHET ÁTÍRNI MERT CSAK OLVASHATÓ REFERENCIÁK (A ÉS B)!

int main()
{
	int x = 7;
	int y = 9;
	cout << "x=" << x << " y=" << y << endl;
	swap_v(x,y);
	cout << "x=" << x << " y=" << y << endl;
	
	
	const int cx = 7;
	const int cy = 9;
	cout << "cx=" << x << " cy=" << y << endl;
	//swap_cr(cx,cy);
	cout << "cx=" << x << " cy=" << y << endl;
	

	
	double dx = 7.7;
	double dy = 9.9;
	cout << "dx=" << x << " dy=" << y << endl;
	//swap_r(dx,dy);
	cout << "dx=" << x << " dy=" << y << endl;
	


	return 0;
}