#pragma once
namespace uiuc
{


	class Cube
	{
	public:
		
		Cube();
		Cube(double longitud);
		//Cube(double longitud, HSLAPixel color);
		
		double getlongitud();
		double getvolumen();
		double getarea();
		void setlongitud(double longitud);

	private:
		double longitud_;
		//HSLAPixel _color;

	};
}
