#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to" << endl;
	string first_name;
	cin >> first_name;

	
    string friend_name;
    cout << "Please enter your friend's name .\n";
    cin >> friend_name;
    

    cout << "If your friend is male enter m, if your friend is female enter f\n";
    char  friend_sex = 0;
    cin >> friend_sex;

    

    cout << "Please enter your age.\n";

    int age =0;
    cin >> age ;

    if(age <= 0 or age >= 110)
    {
        simple_error("you're kidding!");
        cout << endl;
    }

    

    if (age > 0 and age < 110){
        cout << endl << endl << "Your letter:" << endl << endl;
        cout << "Dear " << first_name << "," << endl;
        cout << "\tHow are you? I miss you." << endl;
        cout << "Have you seen " << friend_name << " lately?\n";
        if(friend_sex == 'm') cout << "If you see " << friend_name << " please ask him to call me.\n";

        if(friend_sex == 'f') cout << "If you see " << friend_name << " please ask her to call me.\n";
        cout << "I hear you just had a birthday and you are " << age << " years old.\n";
        if(age < 12) cout <<"Next year you will be " << age +1 << endl;
        if(age == 17) cout <<"Next year you will be able to vote.\n";
        if(age >= 70) cout <<"I hope you are enjoying retirement.\n";



        cout << endl << "Yours sincerely\n" << endl << endl;
        cout << "Vass Bálint\n";
        }

	return 0;
}