#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
	int n, m, j, i, f;
	double h;
	n = 40;
	double* z = new double[n];
	m = 10;
	h = 0.6;
	z[0] = -0.50;
	z[1] = 1.80;
	for (i = 2; i <= n; i++){
		z[i] = (1 - z[i - 1]) / (1 + z[i - 2] * z[i - 2]) * sin(z[i - 1] * z[i - 1] + z[i - 1] * z[i - 2] + 2);
		z[i] = abs(z[i]);
		cout << "z[" << i << "] = " << z[i] << endl;
	}
	for (i = 1; i <= m; i++){
		//cout << "a " << endl;
		f = 0;
		for (j = 1; j < n; j++){
			if (z[j] >= (i - 1) * h && z[j] < i * h)
				f++;
		}
		cout << "f =" << f << endl;
	}
}
