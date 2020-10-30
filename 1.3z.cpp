#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){

  int n = 13,i,j;
  double e = 2.5;
  double a[13] = {0}, b[13] = {0};
  a[0] = 1.5, b[0] = -0.14;

  for(i = 1; i < n; i++){

    double ai = a[i-1], bi = b[i-1]; // ai = a  bi = x
    if(ai >= 0){
      a[i] = sin(1 + ai*bi - bi*bi);
    }else
    a[i] = sin(ai + bi)*sin(ai + bi);
    b[i] = ((1 - ai) / (1 + bi*bi))*sin(ai*ai + ai*bi + 2);
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if((a[i]*a[i] - b[j]*b[j]) < e){
        //cout << i << " = " << a[i] << "    " << j << " = " << b[j] << endl;
        cout << "a[" << i << "] = " << a[i] << endl;
        break;
      }
    }
  }
}
