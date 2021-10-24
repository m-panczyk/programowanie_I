#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    cout <<"123+321=\n444\n";
    system("pause"); //windows specific
    //system("read -n1 -r -p 'Press any key to continue...'"); //Linux specific (possibly macOS)
    //cout << "Press enter to continue!\n";
    //cin.ignore();//multiplatform but not 100% within spec
    return 0;
}
