#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
	int n, m, j, i, f;
	double h;
	n = 35;
	double z[n] = {0};
	m = 9;
	h = 0.8;
	z[0] = -0.01;
	z[1] = 3.20;
	for (i = 2; i <= n; i++){
		double z0 = z[i - 2], z1 = z[i - 1]; // a[j] = z0, x = z1
		if (z0 >= 0)
			z[i] = abs(log(1 + 2*z0 + z1*z1) + 1 - 2.5);
		else
			z[i] = abs(log(1 + z0*z0 + z1*z1) - 1 - 2.5);
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
