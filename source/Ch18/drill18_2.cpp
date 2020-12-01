#include "std_lib_facilities.h"
void elvalasztas(int feladatsorszam)
{
	cout << endl << feladatsorszam << ". feladat: kész.";
	cout << "\n----------------------------------\n\n";
}



vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};



void f(vector<int>& v)
{
	vector<int> lv(10);

	lv=v;

	for (int i = 0; i < v.size(); ++i)
		cout << "lv[i]: " << lv[i] << endl;

	//Define a pointer p to int and initialize it with an array allocated on the free store with the same number of elements as the argument array.
	vector<int> lv2;

	lv2 = lv;

	for (int i = 0; i < v.size(); ++i)
	{
		cout << "lv2[i]: " << lv2[i] << endl;
	}
}



int fac(int n) //faktoriális függvény
{
	return n > 1 ? n*(fac(n - 1)) : 1;
}



int main()
{
	

	for (int i = 0; i < 10; ++i)
		cout << "gv[i]: " << gv[i] << endl;

	elvalasztas(1);
	


	elvalasztas(2);



	elvalasztas(3);



	f(gv);
	cout << "\n\n\n vv vector:\n\n";
	vector<int> vv = {1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };
	f(vv);

	elvalasztas(4);



	return 0;
}
