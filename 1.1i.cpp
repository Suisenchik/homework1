#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
	int n, j, i;
	double h, b, x, tm;
	double a[3]={-160, 0, 14};
	n = 6;
	b = 2;
	h = 0.709;
	double pr, min;

	for (j = 0; j < 3; j++){
		pr = 1;
		min = INT_MAX;
		cout << "a" << j << endl;
		for (i = 0; i < n; i++){
			x = b + i * h;
			tm = (1-5.7*cos(a[j]-x))/(2.6+cos(a[j]+x)*cos(a[j]+x));
			if (min > tm)
				min = tm;
			cout << "F (a" << j << ",x[" << i << "]) = " << tm << endl;
			pr *= abs(tm);
		}
		cout <<"Min = "<< min<< endl;
		cout << "Pr = " << pr << endl;
	}
}
