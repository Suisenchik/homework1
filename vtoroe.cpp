#include<iostream>
using namespace std;
int main(){
  double x, n;
  cin >> x >> n;
  double a = x*x/21;
  double sum = a;
  //cout << a << endl;
  int r;
  for(int i = 1; i < n; i++){
    a *= (x*x*x*2*2*2)/(7*7*7*4*(3*i+1)*(3*i+2)*(3*i+3)*(4*i+5)*(4*i+7));
    sum += a;
  }
  cout << sum;
}
