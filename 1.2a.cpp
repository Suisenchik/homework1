#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
	int n, m, j, i, f;
	double h;
	n = 30;
	double* z = new double[n];
	m = 10;
	h = 0.5;
	z[0] = 0;
	z[1] = -1.02;
	for (i = 2; i <= n; i++){
		z[i] = (1 - z[i - 1]) / (1 + z[i - 2] * z[i - 2]) * sin(z[i - 1] * z[i - 1] + z[i - 1] * z[i - 2] + 2);
		cout << "z[" << i << "] = " << z[i] << endl;
	}
	for (i = 1; i <= m; i++){
		f = 0;
		for (j = 1; j < n; j++){
			if (z[j] >= (i - 1) * h && z[j] < i * h)
				f++;
		}
		cout << "f =" << f << endl;
	}
}
