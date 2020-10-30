#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n = 23, i, j;
	double sp, pow3;
	double x[3] = {-0.4, 2.4, 5.0};
	for (i = 0; i < 3; i++){
		pow3 = 1;
		sp = 3.5 * sin(x[i]) * sin(x[i]) - 2.7 * sin(x[i]) + 1;
		for (j = 0; j < n; j++){
			pow3 = 2 * pow3 / 3 + sp / (3 * pow3 * pow3);
		}
		cout << "Pow (" << sp << ", 1.0/3.0) = " << pow3 << endl;
	}
}
