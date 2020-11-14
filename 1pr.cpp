#include<iostream>
using namespace std;
int main(){
  bool tr = false;
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  for(int i = 10000; i < 100000; i++){
    if(i % a == b && i % c == d){
      cout << i << " ";
      tr = true;
    }
  }
  if(tr == false){
    cout << -1;
  }
}
