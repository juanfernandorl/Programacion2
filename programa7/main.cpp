#include <iostream>

using namespace std;
// ingresar el nombre del alumno, la nota acumulada y examen determinar la nota final y ajustarla a 60
// si esta entre 57 y 59

int main()
{
    char nombre[30];
    int na,ne,nf;
    cout <<"Nombre del alumno:>";
    cin.getline(nombre,30);

    cout<<"Nota acumulada:>";
    cin>>na;

    cout<<"Nota examen:";
    cin>> ne;

    nf= na + ne;

    if((nf>=57)and(nf<60))
    {
        nf=60;
    }

    cout<<"nota final es:"<<nf<<"\n";
    return 0;
}
