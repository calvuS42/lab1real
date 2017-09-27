#define _USE_MATH_DEFINES

#include "functions.h"



int rand1(int & a) {
	a = (28 * a + 76) % m;
	return a;
}

int rand2(int &a) {
	a = (16 * a * a+ 33 * a + 47) % m;
	return a;
}

int rand3(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a % m;
	return a;
}

int rand4(int &a) {
	int b = 0;
	cout << " a = " << a << "m = "  << m << endl;
	while (a*b % m != 1 && b<m) b++;
	if (b == m) b = 0;
	a = (49 * b + 30) % m;
	return a;
}

int rand5(int & a) {
	return abs(rand1(a) - rand2(a)) % m;	
}

double rand6(int & a) {
	double x;
	double m = 0, sigm = 1;
	double sum = 0;
	for (int i = 0; i<12; i++){
		sum += (rand4(a)/n);
	}
	x = m + (sum - 6)*sigm;
	return x;
}

double rand7(int & a, double &w2) {
	if (w2) {
		double b = w2; w2 = 0; return b;
	}
	double u1, u2, v1, v2, x1, x2;
	double s = 1;
	while (s >= 1 && s) {
		u1 = rand2(a)/n;
		u2 = rand1(a)/n;
		v1 = 2 * u1 - 1;
		v2 = 2 * u2 - 1;
		s = v1*v1 + v2*v2;
	}
	x1 = v1*sqrt(-2 * log(s) / s);
	x2 = v2*sqrt(-2 * log(s) / s);
	w2 = x2;
	return x1;        
}

double rand8(int & a) {
	double x, u, v;
	u = rand1(a) / n; 
	v = rand1(a) / n;  
	x = sqrt(8 / exp(1))*(v - 0.5) / u;  cout << x << endl;
	while (u && x*x >= 5 - 4 * exp(0.25)*u && x*x <= 4 * exp(-1.35) / u + 1.4 && x*x >= -4 * log(u)) {
		u = rand1(a) / n;
		v = rand1(a) /n;  
		x = sqrt(8 / exp(1))*(v - 0.5) / u;  
	} 
	return x;
}


double rand9(int & a) {
	return -17 * log(rand1(a) / n);
	
}

double rand10(int & a) {
	double u, y, b; double x = -1, f = 2, v = 1;
	while (x <= 0 || v > f) {
		b = 56;
		u = rand1(a) / n;
		y = tan(M_PI*u);
		x = (sqrt(2.0 * b - 1)) * y + b - 1;
		v = rand1(a)/n;
		f = (1 + y*y)*exp((b- 1)*log(x / (b - 1)) - y*sqrt(2 * b - 1));
	}
	cout << x << endl;
	return x; 
}