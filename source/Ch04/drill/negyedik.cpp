#include "std_lib_facilities.h"
int main(){
    double a=0; //megadott szám
    string meret; // felvett méret
    string meter=" m"; // kell a méter megadásához
    vector <double> szamok; // tárolja a megadott számokat
    vector <string> meretek; // tárolja a megadott 

    vector <double> joszamok; //ezek már itt a jó számok átváltva
    vector <string> jomeretek; //Méterben megadva
    string kilepes; // while ciklust segíti
    
/*
    //Feladat: 1-5,
    double b=0;
    cout << "Írj be 2 számot." << endl;
	while (cin >> a >> b)
    {
        if (a>b) cout << "A nagyobbik szám: " << a << endl;
        if (b>a) cout << "A nagyobbik szám: " << b << endl;
        if (a==b) cout << "A két szám egyenlő: " << a << " = " << b << endl;
        if (abs(a - b) <=0.01) cout << "Majdnem egyenlőek." << endl;
        

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
        while (!cin)
        {  
            cout << "Ez nem egy szám volt, kérlek adj meg egy SZÁMOT!!!";
            cin.clear();
            cin.ignore();
            cin >> a;
        }
        szamok.push_back(a); // beleteszi a vectorba a JÓL megadott számot!


        cout << "Kérlek adj meg egy méretet. (feet, cm, m ,inch): ";
        cin >> meret;
        while ( meret!="cm" and meret!="m" and meret!="feet" and meret!="inch")
        {
            cout << "Ez nem egy megadott méret volt! Próbálkozz újra: " << endl;
            cin.clear();
            cin.ignore();
            cin >> meret;
        }
        meretek.push_back(meret);

        if(meret=="cm")
        {
            a=a/100;
            joszamok.push_back(a);
            jomeretek.push_back(meter);
        }
        if(meret == "m")
        {
            a=a;
            joszamok.push_back(a);
            jomeretek.push_back(meter);
        }
        if(meret == "feet")
        {
            a=a*0.0254;
            joszamok.push_back(a);
            jomeretek.push_back(meter);
        }
        if(meret == "inch")
        {
            a=((a*12)*2.54)/100;
            joszamok.push_back(a);
            jomeretek.push_back(meter);
        }
        // MAX ÉS MIN MEGHATÁROZÁSA:
        if(joszamok.size()>1)
        {
            cout << endl << "A legkisebb szám a vector-ban: " << *min_element(joszamok.begin(), joszamok.end()) << " m" << endl;  
            cout << endl << "A legnagyobb szám a vector-ban: " << *max_element(joszamok.begin(), joszamok.end()) <<  " m" << endl << endl; 
        }
        
    }//while vége
    
    if(joszamok.size()>1)
    {
        cout << endl  << "A számok sorban:" << endl << endl ;
        for (int i = 0; i < szamok.size(); ++i)
            {
                sort(joszamok);
                cout << joszamok[i] << " " << jomeretek[i] <<endl << endl;
            }
    }
    if(joszamok.size()==1)
    {
        cout << endl << "Az egyetlen számod: " << joszamok[0] << " " << jomeretek[0] << endl; 
    }
    if(joszamok.size()==0)
    {
        cout << endl << "Nem érte meg elindítani a programot." << endl; 
    }
    return 0;
}