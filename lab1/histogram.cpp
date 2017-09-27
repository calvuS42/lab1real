#define _USE_MATH_DEFINES


#include "histogram.h"


void draw(double a, int *arr, double low, double up) {
	for (int f = 0; f < 10; f++) {
		if ((a >= low + f*(up - low) / 10) && (
			a < low + (f + 1)*(up - low) / 10)) arr[f] ++;
	}
}	



void drawArr(int *arr, int def) {
	double a, b, up, low;
	if (def < 6 && def) { low = 0; up = 1; }
	else if (def < 9) { low = -3; up = 3; }
	else { low = 0; up = 100; }
	for (int i = 0; i < 10; i++) {
		a = low + i*(up - low) / 10;
		b = low + (i + 1)*(up - low) / 10;
		cout << "\[" << a << "\, " << b << "\]  "<< arr[i] << "\% \n";
	}
}

void hist(int & a, int & b, int choice, int *arr) {
	double x; double w2 = 0;
	switch (choice) {
	case 1: { x = rand1(a)/n; draw(x, arr, 0, 1); break; }
	case 2: { x = rand2(a)/n; draw(x, arr, 0, 1); break; }
	case 3: { x = rand3(a, b)/n; draw(x, arr, 0, 1); break; }
	case 4: { x = rand4(b)/n; draw(x, arr, 0, 1); break; }
	case 5: { x = rand5(a)/n; draw(x, arr, 0, 1); break; }
	case 6: { x = rand6(b); draw(x, arr, -3, 3); break; }
	case 7: { x = rand7(a, w2); draw(x, arr, -3, 3); break; }
	case 8: { x = rand8(a); draw(x, arr, -3, 3); break; }
	case 9: { x = rand9(a); draw(x, arr, 0, 100); break; }
	case 10: { x = rand10(a); draw(x, arr, 0, 100); break; }
	default:  break; 
	}
}