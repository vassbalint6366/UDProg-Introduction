#include "std_lib_facilities.h"


struct Reading {
	double x;
	double y;
};


bool operator==(const auto& p1, const auto& p2)
{
	return (p1.x!=p2.x && p1.y!=p2.y);
}


int main()


try{

	vector<Reading> original_points;
	double x;
	double y;
	for (int i = 0; i < 7; ++i)
	{
		cout << "Give me 2 numbers (x and y)" << endl;
		cin >> x;
		cin >> y;
		original_points.push_back(Reading{x,y});
	}

	for(const auto& r : original_points)
		cout << r.x << ' ' << r.y << endl;

	cout << "mydata.txt tartalmának átírása: ";

	string outputname = "mydata.txt";
	ofstream ost {outputname};
	for (const auto& r : original_points)
		ost << r.x << ' ' << r.y << endl;
	ost.close();

	cout << "sikeres" << endl;

	vector<Reading> processed_points;
	string inputname = "mydata.txt";
	ifstream ist {inputname};
	while (ist >> x >> y)
	{
		processed_points.push_back(Reading{x,y});
	}

	vector<Reading> diff;
	if (original_points.size() != processed_points.size())
	{
		cout << "Something's wrong!" << endl;
	}
	
	if (original_points != processed_points) 
	cout << "Something's worng!" << endl;

	return 0;

}
catch (runtime_error& e)
{
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch (...)
{
	cerr << "Some error\n";
	return 2;
}