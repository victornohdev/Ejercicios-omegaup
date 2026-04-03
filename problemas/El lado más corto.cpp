#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,y,x2,y2,xf,yf;
    double longitud,longitudf=1e18;

cin>>x>>y;
xf=x;
yf=y;
  for(int i=0; i<3; i++) {
      
cin>>x2>>y2;
longitud= sqrt((pow((x2-x),2) + pow((y2-y),2)));
x=x2;
y=y2;
if (longitud<longitudf)
longitudf=longitud;
  }
  longitud= sqrt((pow((xf-x),2) + pow((yf-y),2)));
  if (longitud<longitudf)
longitudf=longitud;
cout<<longitudf;
    return 0;
}