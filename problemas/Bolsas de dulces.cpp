#include <iostream>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t,num1,num2,result=0;
  cin >> t;
  
  while (t--) {
cin>>num1>>num2;
result+=num1*num2;
  }
cout<<result;
  return 0;
}