#include<iostream>
using namespace std;
class Rectangle{
	int length;
	int breadth;
	int circumference;
	int area;
	friend void getRect();

	public:
	Rectangle(int a,int b){
		length=a;
	    breadth=b;
	}
	void getRect(){
		circumference=2*length+2*breadth;
		area=length*breadth;
		cout<<"area :"<<area<<endl<<"Circumference: "<<circumference<<endl;
	}
};
int main(){
	Rectangle rt(2,2);
	rt.getRect();
}
