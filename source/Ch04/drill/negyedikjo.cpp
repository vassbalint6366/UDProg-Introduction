#include "std_lib_facilities.h"
int main(){
    double a=0;
    string mertekegyseg;
    string meter=" m";
    vector <double> szamok;
    vector <string> meretek;
    double sum=0;
    vector <double> joszamok;
    vector <string> jomertekegyseg;
    string kilepes;

    
/*
    //Feladat: 1-5,

    double b=0;
    double c=0;
    cout << "Írj be 2 számot." << endl;
	while (cin >> b >> c)
    {
        if (b>c) cout << "A nagyobbik szám: " << b << endl;
        if (c>b) cout << "A nagyobbik szám: " << c << endl;
        if (b==c) cout << "A két szám egyenlő: " << b << " = " << c << endl;
        if (abs(b - c) <=0.01) cout << "Majdnem egyenlőek." << endl;
    }
*/


    while(kilepes !="|")
    {
        cout << "Ha folytatni szeretnéd nyomd meg bármelyik gombot, ha le szeretnéd állítani akkor írj be egy | jelet! " << endl; 
        cin >> kilepes;
        if(kilepes == "|")
        {
            break;
        }
    

        cout << "Írj be 1 számot." << endl;
        cin >> a;
        szamok.push_back(a); 


        cout << "Kérlek adj meg egy mértékegységet amiben a számod van. (ft, cm, m ,in):    ";
        cin >> mertekegyseg;

        if(mertekegyseg=="cm")
        {
            a=a/100;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
        }
        if(mertekegyseg == "m")
        {
            a=a;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
        }
        if(mertekegyseg == "ft")
        {
            a=((a*12)*2.54)/100;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
        }
        if(mertekegyseg == "in")
        {
            a=a*0.0254;
            joszamok.push_back(a);
            jomertekegyseg.push_back(meter);
        }
        
    }//while vége
    
    if(joszamok.size()>1)
    {
        cout << endl << "A legkisebb szám a vector-ban: " << *min_element(joszamok.begin(), joszamok.end()) << " m" << endl;  
        cout << endl << "A legnagyobb szám a vector-ban: " << *max_element(joszamok.begin(), joszamok.end()) <<  " m" << endl << endl; 
    }

        sort(joszamok);
    if(joszamok.size()>1)
    {
        cout << endl  << "A számok sorban:" << endl << endl ;
        for (int i = 0; i < joszamok.size(); ++i)
        {
            cout << joszamok[i] << " " << jomertekegyseg[i] <<endl << endl;
        }
    }

    if(joszamok.size()==1)
    {
        cout << endl << "Az egyetlen számod: " << joszamok[0] << " " << jomertekegyseg[0] << endl; 
    }

    if(joszamok.size()==0)
    {
        cout << endl << "Nem érte meg elindítani a programot." << endl; 
    }
    
    if(joszamok.size()>1)
    {
        cout << endl  << "A számok összege (méterben): ";
        for (int i = 0; i < joszamok.size(); ++i)
        {
            sum=sum+joszamok[i];

        }
        cout << sum << endl;
    }
    
    return 0;
}