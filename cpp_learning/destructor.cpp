#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
class WithCC {
public:
	int id;
	WithCC(int i):id(i) {printf("ִ��idΪ %d ��WithCC���캯����\n",id);}
	~WithCC() {printf("ִ��idΪ %d ��WithCC����������\n",id);}
};
WithCC withCC1(1);
static WithCC withCC2(2);
int main() {
	printf("����main����!\n");
	WithCC withCC3(3);
	if(true) {
		printf("����if���!\n");
		WithCC withCC4(4);
		printf("����static����\n");
		static WithCC withCC5(5);
		printf("if��伴������!\n");
	}
	WithCC* withCC6 = new WithCC(6);
	//delete withCC_new;
	printf("main��������!\n");
	return 0;
}