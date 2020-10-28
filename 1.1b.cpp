#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
	int n, j, i;
	double h, b, x, tm;
	double a[3]={-19.2, 1.51, 7};
	n = 10;
	b = -0.5;
	h = 0.2;
	double max, min;

	for (j = 0; j < 3; j++){
		max = INT_MIN;
		min = INT_MAX;
		cout << "a" << j << endl;
		for (i = 0; i < n; i++){
			x = b + i * h;
			if (a >= 0)
				tm = x * cos(a[j] - x + 1);
			else
				tm = 2 * cos(a[j] + x);
			if (max < abs(tm))
				max = abs(tm);
			if (min > abs(tm))
				min = abs(tm);
			cout << "F (a" << j << ",x[" << i << "]) = " << tm << endl;
		}
		cout <<"Min = "<< min<< endl;
		cout << "Max = " << max << endl;
	}
}
