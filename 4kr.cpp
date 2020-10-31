#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n = 26, i, j;
	double sp, pow3;
	double x[3] = {-0.7, -1.6, 3.5};
	for (i = 0; i < 3; i++){
		pow3 = 1;
		if(x[i] >= 0){
			sp = sin(x[i] + 1)*sin(x[i] + 1);
		}
		else
		sp = sin(x[i] + 1);
		for (j = 0; j < n; j++){
			pow3 = 2 * pow3 / 3 + sp / (3 * pow3 * pow3);
		}
		cout << "Pow (" << sp << ", 1.0/3.0) = " << pow3 << endl;
	}
}
