#include <iostream>
#include "Cube.h"
#include <stdio.h>
#include <conio.h>

using namespace std;
using uiuc::Cube;

int main()
{
	Cube a;
	cout << "la longitud del cubo es: ";
	cout << a.getlongitud()<< endl;
	cout << "el area del cubo es: ";
	cout << a.getarea()<<endl;
	cout << "el volumen del cubo es: ";
	cout << a.getvolumen()<<endl;
	
	system("pause > null");
	return 0;
}