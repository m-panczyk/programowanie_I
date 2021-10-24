#include <iostream>
using namespace std;

int main(){
    char s[3];
    cin.getline(s,4);

    for (int i=0;i<3;i++){
        int a=4,b=4;
        for(int n=0;n<3;n++){
            if(n!=i){
                if(a>3){
                    a=n;
                }
                else{
                    b=n;
                }
            }
        }
        cout<<s[i]<<s[a]<<s[b]<<endl;
        cout<<s[i]<<s[b]<<s[a]<<endl;
    } 
    return 0;
}
