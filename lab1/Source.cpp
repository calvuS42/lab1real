#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "functions.h"
#include "histogram.h"

using namespace std;

void main() {
	int def = 1; int a = 48; int b = 1;
	while (def) {
		int *arr = new int[10];
		for (int i = 0; i < 10; i++) arr[i] = 0;
		cout << "enter your wanted number! 0 to exit. \n";
		cin >> def;
		for (int i = 0; i < 100; i++) {
			hist(a, b, def, arr);
		}
		drawArr(arr, def);
		delete arr;
	}
	system("pause");
}