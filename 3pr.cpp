#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int sr = 0, count = 0;
  int n, i;
  cin >> n;
  int mas[n];
  for(i = 0; i < n; i++){
    cin >> mas[i];
    if(mas[i] % 2 == 1){
      count++;
      sr+=mas[i];
    }
  }
  cout << setprecision(3) << (double)  sr/count;
}
