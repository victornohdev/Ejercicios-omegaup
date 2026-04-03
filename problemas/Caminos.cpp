#include <iostream>
using namespace std;

int main() {
    
int h,w;
cin>>h>>w;
long long dp[h+1] [w+1];

for (int i=0; i<=h; i++)
dp[i][0] =1;

for (int i=0; i<=w; i++)
dp[0][i] =1;

for (int i =1; i<=h;i++){
  for (int j=1; j<=w; j++){
    dp[i][j]=dp[i-1][j]+dp[i][j-1];
  }
}
cout<<dp[h][w];
  return 0;


}