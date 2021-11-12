#include <iostream>
#include <cmath>
using namespace std;

void tryg(float big,float small1,float small2){
        if(pow(big,2)==pow(small1,2)+pow(small2,2)){
                    cout<<"TAK"<<endl;
            }else{
                    cout<<"NIE"<<endl;
            }
}
int main(){
        float a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c){
        tryg(a,b,c);
        }else if(b>a && b>c){
                tryg(b,a,c);
        }else{
                tryg(c,a,b);
        }
                

    return 0;
}
