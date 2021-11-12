#include <iostream>
using namespace std;

int main(){
    srand(time(NULL));
    cout<<rand()%500<<endl<<rand()%201-100;
    return 0;
}
