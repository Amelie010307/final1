#include <iostream>
using namespace std;
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
using std::ifstream;
using std::ofstream;	
main()
{
	int opt,suma,pro;
	string nom,a,f;
	float n1,n2,n3,b,c,d;
	cout<<"\n\n FINAL PRIMER PERIODO";
	cout<<"\n\n TIENE 3 OPCIONES: (1) INGRESAR EL NOMBRE Y LAS NOTAS, (2) VER EL PROMEDIO, (3) SALIR: ";
	cin>>opt;
	if(opt==1)
	{
	ofstream final1("final1.txt",ios::app);
	cout<<"\n\n INGRESE EL NOMBRE: ";
	cin>>nom;
	cout<<"\n\n INGRESE LAS NOTAS DEL ESTUDIANTE(NOTA1): ";
	cin>>n1;
	cout<<"\n\n INGRESE LAS NOTAS DEL ESTUDIANTE(NOTA2): ";
	cin>>n2;
	cout<<"\n\n INGRESE LAS NOTAS DEL ESTUDIANTE(NOTA3): ";
	cin>>n3;
	final1<<nom;
	final1<<" ";
	final1<<n1;
	final1<<" ";
	final1<<n2;
	final1<<" ";
	final1<<n3;
	final1<<"\n";
	final1.close();
	}
	if(opt==2)
	{
	ifstream final2("final1.txt");		
		final2>>a>>b>>c>>d;
		suma=b+c+d;
		pro=suma/3;
		if(pro<2.99)
		{
			f="\n\n PERDIO, NECESITAS ESFORZARTE MAS:(";
		}
		else
		{
			f="\n\n GANO, FELICITACIONES ERES GENIAL :)";
		}
		cout<<"\n\n EL NOMBRE DEL ESTUDIANTE ES: "<<nom;
		cout<<"\n\n LAS NOTAS SON: "<<n1<<" "<<n2<<" "<<n3<<" ";
		cout<<"\n\n EL PROMEDIO ES: "<<pro;
		cout<<"\n\n EL ESTUDIANTE : "<<f;
		
		
	}
	if(opt==3)
{
	
	cout<<"HASTA LA PROXIMA:):";
}
	
}

