#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x;
    cin>>x;
    float first=((2*sqrt(pow(x,3)+M_PI))/abs(x))/cos(x);
    float second=pow(pow(x,-2)+abs(x),0.2)/(pow(tan(x),2)*pow(x,-2.1));
    
    cout<<first<<" "<<second<<endl;

    return 0;
}
