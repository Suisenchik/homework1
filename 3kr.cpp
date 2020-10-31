#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){

  int n = 17,i,j;
  double e = 1.1;
  double a[17] = {0}, b[17] = {0};
  a[0] = 3.18, b[0] = -5.60;

  for(i = 1; i < n; i++){

    double ai = a[i-1], bi = b[i-1]; // ai = a  bi = x
    a[i] = sqrt(2 + sin(ai + bi)) + sqrt(2 - cos(ai + bi));
    if(ai >= 0){
      b[i] = sin(1 + ai*bi - bi*bi);
    }
    else
    b[i] = sin(ai + bi)*sin(ai + bi);
    //cout << i << " " << a[i] << " " << b[i] << endl;
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      double c = sqrt(abs(a[i] - b[j]));
      //cout << i << " " << j << " " << c << endl;
      if(c < e){
        //cout << i << " = " << a[i] << "    " << j << " = " << b[j] << endl;
        cout << "a[" << i << "] = " << a[i] << endl;
        break;
      }
    }
  }
}
