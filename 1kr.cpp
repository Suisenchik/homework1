#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
	int n, j, i;
	double h, b, x, tm = 0;
	double a[3]={-0.04, 2, 1.96};
	n = 9;
	b = -1;
	h = 0.05;
	double max, min;

	for (j = 0; j < 3; j++){
		max = INT_MIN;
		min = INT_MAX;
		cout << "a" << j << endl;
		for (i = 0; i < n; i++){
			x = b + i * h;
			if (a[j] >= 0)
				tm = log(1 + 2*a[j] + x*x) + 1;
			else
				tm = log(1 + a[j]*a[j] + x*x) - 1;
			if (max < tm*tm)
				max = tm*tm;
			if (min > tm*tm)
				min = tm*tm;
			cout << "F (a" << j << ",x[" << i << "]) = " << tm << endl;
		}
		cout <<"Min = "<< min<< endl;
		cout << "Max = " << max << endl;
	}
}
