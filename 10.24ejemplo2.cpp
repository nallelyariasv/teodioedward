#include<iostream>
//#include<curses.h>
using namespace std;

int main()
{
    char texto[]="AlumnoFeliz";
    char texto2[]={"1"};
    char profesion[30];
    cout<<texto<<endl;
    cout<<texto2<<endl;
    cout<<"Describir la profesion: ";
    //cin>>profesion;
    //gets(profesion);
    cin.getline(profesion,10);
    cout<<profesion<<endl;

    return 0;
}