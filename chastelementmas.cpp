#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,i,j,maxc=0,max=0,tempc=1,temp=0;
  cin >> n;
  int mas[n];
  for(i = 0; i < n; i++){
    cin >> mas[i];
  }
  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      temp = mas[i];
      if(mas[j] == temp){
        tempc++;
      }
    }
    if(tempc > maxc){
      maxc = tempc;
      max = temp;
    }
    tempc = 1;
  }
  cout << max;
}
