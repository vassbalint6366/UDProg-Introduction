#include "std_lib_facilities.h"
void elvalasztas(int feladatsorszam)
{
	cout << endl << feladatsorszam << ". feladat: kész.";
	cout << "\n----------------------------------\n\n";
}



int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};



void f(int a[], int sz)
{

	int la[10];
	for (int i = 0; i < sz; ++i)
		la[i] = ga[i];

	for (int i = 0; i < sz; ++i)
		cout << "la[i]: " << la[i] << endl;

	int *p = new int[sz];
	
	for (int i = 0; i < sz; ++i)
	{
		p[i] = a[i];
	}
	for (int i = 0; i < sz; ++i)
	{
		cout << "p[i]: " << p[i] << endl;
	}
	delete[] p;

}



int fac(int n) //faktoriális függvény
{
	//		    ha		igaz	  hamis
	return n > 1 ? n*(fac(n - 1)) : 1;
	// fac(2) => 2 nagyobb mint 1? igen tehát igaz 2*... 2-1=1
	//		1 nagyobb mint 1? nem tehát      2*1
}



int main()
{
	

	for (int i = 0; i < 10; ++i)
		cout << "ga[i]: " << ga[i] << endl;

	elvalasztas(1);
	


	elvalasztas(2);



	elvalasztas(3);



	f(ga, 10);
	int aa[10] = {1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };
	f(aa,10);

	elvalasztas(4);



	return 0;
}
