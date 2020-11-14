#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  for(int i = 0; i < a; i++){
    cout << i << " ";
  }
  for(int i = b; i >= a; i--){
    cout << i << " ";
  }
  for(int i = b + 1; i < c; i++){
    cout << i << " ";
  }
  for(int i = d; i >= c; i--){
    cout << i << " ";
  }
  for(int i = d + 1; i < n; i++){
    cout << i << " ";
  }
}
