#include<iostream>
using namespace std;
int main(){
  int n;
  bool tr = false;
  cin >> n;
  for(int i = 2; i < n; i++){
    if(n % i == 0){
      cout <<  "composite";
      break;
      tr = true;
    }
  }
  if(!tr){
    cout << "prime";
  }
}
