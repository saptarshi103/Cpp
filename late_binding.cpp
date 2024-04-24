#include<iostream>
using namespace std;

class baseclass{
	public:
	int base_var=1;
	virtual display(){
		cout<<base_var;
	}
};

class Derivedclass: public baseclass{
	public:
	int deri_var=2;
	virtual display(){
		cout<<deri_var;
	}
};
int main(){
	baseclass b;
	Derivedclass d;
	baseclass *ptr;
	ptr=&d;
	ptr->display();
	
}

