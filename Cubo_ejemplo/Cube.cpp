#include "Cube.h"
#include <iostream>

namespace uiuc {


	uiuc::Cube::Cube()
	{
		longitud_ = 1;
	}

	uiuc::Cube::Cube(double longitud)
	{
		longitud_ = longitud;
	}

	double uiuc::Cube::getlongitud()
	{
		return longitud_;
	}

	double uiuc::Cube::getvolumen()
	{
		return longitud_ * longitud_ * longitud_;
	}

	double uiuc::Cube::getarea()
	{
		return 6 * longitud_ * longitud_;
	}

	void uiuc::Cube::setlongitud(double longitud)
	{
		longitud_ = longitud;
		return;
	}
}