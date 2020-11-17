#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp{0};
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp{0};
	temp = a;
	a = b;
	b = temp;
}

/* nem fordul le mert a konstans tagnak nem lehet változtatni az értékét

void swap_cr(const int& a, const int& b)
{
	int temp{0};
	temp = a;
	a = b;
	b = temp;
}
*/

int main()
{
	int x = 7;
	int y = 9;
	cout << "x = " << x << " y = " << y << endl;
	cout << "x-ből lesz y" << endl;
	swap_r(x,y);
	cout << "x = " << x << " y = " << y << endl << endl;

	cout << "x = " << x << " y = " << y << endl;
	cout << "x értéke és y értéke" << endl;
	swap_v(7,9);
	cout << "x = " << x << " y = " << y << endl << endl; // semmi nem változik mert csak funkciójukban változnak az érték nem változik
	
	//const int cx = 7;
	//const int cy = 9;
	// swap_r(7, 9);
	// swap_v(cx,xy);
	// konstans értékeket nem lehet swap-olni

	/*double dx = 7.7;
	double dy = 9.9;
	cout << "dx= " << dx << "dy= " << dy << endl;
	cout << "calling swap_r" << endl;
	swap_r(dx,dy);
	cout << "dx= " << dx << "dy= " << dy << endl << endl;

	cout << "dx= " << dx << "dy= " << dy << endl;
	cout << "calling swap_v" << endl;
	swap_v(7.7,9.9);
	cout << "dx= " << dx << "dy= " << dy << endl << endl;*/
	//nem fordul le mivel double-ből int változót akar csinálni ami nem értelmezhető
}