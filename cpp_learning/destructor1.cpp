#include<string>
#include<cstdio>
using namespace std;
class A
{
public:
    A(){printf("A created.\n"); }
    A(A&a){ printf( "A created with copy.\n"); }
    ~A(){printf( "A destroyed.\n"); }
};
A foo( A a )
{
     A b;
     return b;
}
/*
int main( void )
{
     A a;
     a = foo(a);
     return 0;
}*/