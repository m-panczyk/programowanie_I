#include <iostream>
using namespace std;

string getName(string txt){
        while(txt.size()==0){
                cin>>txt;
        }
        return txt;
}
int main(){
    string name,lastName;
    name = getName(name);
    lastName = getName(lastName);

    cout<<name[0]<<" "<<lastName[0]<<endl<<name.size()<<endl<<lastName[lastName.size()-1]<<endl;
    return 0;
}
