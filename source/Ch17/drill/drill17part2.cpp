#include "std_lib_facilities.h"

void elvalasztas(int feladatsorszam)
{
	cout << endl << feladatsorszam << ". feladat: kész.";
	cout << "\n----------------------------------\n\n";
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << i+1 << ". elem: " << *a << "	Memóriában: " << a << endl;
		a++;
	}
}





int main()
{
	int n = 7;
	int* p1 = &n;
	elvalasztas(1);



	cout << "n: " << n << endl;
	cout << "*p1: " << *p1 << endl;
	cout << "&n: " << &n << endl;
	cout << "p1: " << p1 << endl;
	elvalasztas(2);



	int nums7[7] = { 1, 2, 4, 8, 16, 32, 64 };
	int* p2 = nums7;
	elvalasztas(3);



	print_array(cout, p2, 7);
	elvalasztas(4);



	int* p3 = p2;
	elvalasztas(5);



	p2 = p1;
	elvalasztas(6);



	p2 = p3;
	elvalasztas(7);



	cout << "(p1) " << *p1 << "	Memóriában: " << p1 << endl;
	cout << "p2:" << endl;
	print_array(cout, p2, 7);
	elvalasztas(8);



	elvalasztas(9);



	int nums10_1[10] = { 1,2,4,8,16,32,64,128,256,512 };
	p1 = nums10_1;
	elvalasztas(10);



	int nums10_2[10] = { 0,0,0,0,0,0,69,0,0,0 };
	p2 = nums10_2;
	elvalasztas(11);



	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}
	//print_array(cout, p2, 10);
	elvalasztas(12);



	vector<int> vector_nums10_1 { 1,2,4,8,16,32,64,128,256,512 };
	p1 = &vector_nums10_1[0];
	vector<int> vector_nums10_2 { 0,0,0,0,0,0,69,0,0,0 };
	p2 = &vector_nums10_2[0];
	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}
	elvalasztas(13);



	return 0;
}
