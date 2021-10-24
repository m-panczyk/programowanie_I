#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,p;
    cin>>a>>b>>c;
    p=.5*(a+b+c);
    cout<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    return 0;
}
