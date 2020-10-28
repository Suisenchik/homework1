#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
	int n, j, i;
	double h, b, x, tm;
	double a[3]={-3, 17.01, 8};
	n = 6;
	b = -2.5;
	h = 0.952;
	double pr, max;

	for (j = 0; j < 3; j++){
		pr = 1;
		max = INT_MIN;
		cout << "a" << j << endl;
		for (i = 0; i < n; i++){
			x = b + i * h;
			tm = 0.8 + 2*sin(x) -5.5*sin(a[j])*sin(a[j]);
			if (max < abs(tm))
				max = abs(tm);
			cout << "F (a" << j << ",x[" << i << "]) = " << tm << endl;
			pr *= abs(tm);
		}
		cout <<"Max = "<< max << endl;
		cout << "Pr = " << pr << endl;
	}
}
