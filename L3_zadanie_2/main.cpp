#include <iostream>
using namespace std;

int main(){
	char a,b,c;
	bool w;
	do{
	cin>>a>>b>>c;
	if(a=='A'&&b=='A'&&c=='A'){
		cout<<"ZLE\n";
		w=1;
	}else{
		w=0;
	}
	}while(w);

	if(a=='A'||b=='B')
		cout<<"DOBRZE\n";
	else
		cout<<"SREDNIO\n";

	return 0;
}

