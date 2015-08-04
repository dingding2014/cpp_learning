#include<iostream>
#include<cstdio>
using namespace std;
int& g(int& x) {          //函数返回值是引用类型
    x++;
	return x;
}
struct A {
private:
	int x;
public :
	int y;
};
/*
int main() {
	int a=10;
	int& c=g(a);
	c++;
	cout<<c<<endl<<a;
	A aa ;
	//aa.x=6;  //a.x is private 
	aa.y=1;
}*/
