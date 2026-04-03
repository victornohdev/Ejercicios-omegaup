#include <iostream>
using namespace std;
int main(){
    
    int x,y,z;
    cin>>x>>y>>z;
    
    if(x==y&&y==z&&z==x){
        cout<<"equilatero";
    }else if (x!=y&&y!=z&&y!=x){
        cout<<"escaleno";}else
        cout<<"isosceles";

}