#include "std_lib_facilities.h"
void elvalasztas(int feladatsorszam)
{
	cout << endl << feladatsorszam << ". feladat: kész.";
	cout << "\n----------------------------------\n\n";
}
void elvalasztasfeladat10()
{
	cout << "\n----------------------------------\n\n";
}










void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
	{
		os << i+1 << ". elem: " << a[i] << endl;
	}
}
void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << i+1 << ". elem: " << a[i] << endl;
	}
}

void print_vector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << i+1 << ". elem: " << *v[i] << endl;
}

void delete_vector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		delete v[i];
}


int main()
{
	int* nums1 = new int[10];
	elvalasztas(1);



	for (int i = 0; i < 10; ++i)
	{
		cout << i+1 << ". elem: " << nums1[i] << endl;
	}
	elvalasztas(2);



	//delete[] nums1;
	// nem kell delete a 4-es feladat miatt
	elvalasztas(3);



	print_array10(cout, nums1);
	delete[] nums1;
	elvalasztas(4);



	int* nums2 = new int[10] {100,101,102,103,104,105,106,107,108,109};
	print_array10(cout, nums2);
	delete[] nums2;
	elvalasztas(5);


	int* nums3 = new int[11] {100,101,102,103,104,105,106,107,108,109,110};
	print_array(cout, nums3, 11);
	delete[] nums3;
	elvalasztas(6);



	elvalasztas(7);



	int* nums4 = new int[20] {100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};
	print_array(cout, nums4, 20);
	delete[] nums4;
	elvalasztas(8);



	elvalasztas(9);

	vector <int*> nums1vector;
	int szamnoveleshez1 = 100;
	for (int i = 0; i < 10; ++i)
	{
		nums1vector.push_back(new int{szamnoveleshez1++});
	}
	for (int i = 0; i < nums1vector.size(); ++i)
	{
		cout << i+1 << ". elem: " << *nums1vector[i] << endl;
		// * kell mivel a memória helyén lévő értékre hivatkozunk
	}
	delete_vector(nums1vector);



	elvalasztasfeladat10();



	vector <int*> nums2vector;
	int szamnoveleshez2 = 100;
	for (int i = 0; i < 11; ++i)
	{
		nums2vector.push_back(new int{szamnoveleshez2++});
	}
	for (int i = 0; i < nums2vector.size(); ++i)
	{
		cout << i+1 << ". elem: " << *nums2vector[i] << endl;
	}
	delete_vector(nums2vector);
	


	elvalasztasfeladat10();



	vector <int*> nums3vector;
	int szamnoveleshez3 = 100;
	for (int i = 0; i < 20; ++i)
	{
		nums3vector.push_back(new int{szamnoveleshez3++});
	}
	for (int i = 0; i < nums3vector.size(); ++i)
	{
		cout << i+1 << ". elem: " << *nums3vector[i] << endl;
	}
	delete_vector(nums3vector);
	


	elvalasztas(10);



	return 0;
}
