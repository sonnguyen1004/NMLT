#include <iostream>
#include <cmath>
using namespace std;
bool checknt(int n){
  for(int i=2; i<=sqrt (n); i++){
    if(n%i==0) return false;
  }
  return n>1;
}
int main(){
  int n;
  cin>>n;
  if(checknt(n)){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}