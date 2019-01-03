#include <iostream>

using namespace std;

typedef struct pecahan{
int pb;
int py;
};

int main(int, char*argv[])
{
    pecahan P1,P2,P3;
    cout<<"------Menghitung 2 Pecahan-------\n \n";
    cout<<"Masukkan Pb P1  = ";
    cin>>P1.pb;
    cout<<"Masukkan Py P1  = ";
    cin>>P1.py;

    cout<<"\t     "<<P1.pb<<endl;
    cout<<"\tP1 = -"<<endl;
    cout<<"\t     "<<P1.py<<endl;
    cout<<"\n \n";

    cout<<"Masukkan Pb P2  = ";
    cin>>P2.pb;
    cout<<"Masukkan Py P2  = ";
    cin>>P2.py;

    cout<<"\t     "<<P2.pb<<endl;
    cout<<"\tP2 = -"<<endl;
    cout<<"\t     "<<P2.py<<endl;

    P3.pb =P1.pb*P2.pb;

    P3.py =P1.py*P2.py;

    cout<<"\nHasil Pekalian P1 dan P2 = \n";
    cout<<"\t     "<<P3.pb<<endl;
    cout<<"\tP3 = -"<<endl;
    cout<<"\t     "<<P3.py<<endl;


    return 0;
}
