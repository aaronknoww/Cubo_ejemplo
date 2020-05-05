#include <iostream>
#include "Cube.h"
using namespace std;
using namespace uiuc;
int main()
{
    Cube a{ 10 };
	cout << "la longitud del cubo es: ";
	cout << a.getlongitud() << endl;
	cout << "el area del cubo es: ";
	cout << a.getarea() << endl;
	cout << "el volumen del cubo es: ";
	cout << a.getvolumen() << endl;

	system("pause > null");
    return 0;

}