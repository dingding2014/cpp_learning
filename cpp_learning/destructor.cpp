#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
class WithCC {
public:
	int id;
	WithCC(int i):id(i) {printf("执行id为 %d 的WithCC构造函数！\n",id);}
	~WithCC() {printf("执行id为 %d 的WithCC析构函数！\n",id);}
};
WithCC withCC1(1);
static WithCC withCC2(2);
int main() {
	printf("进入main函数!\n");
	WithCC withCC3(3);
	if(true) {
		printf("进入if语句!\n");
		WithCC withCC4(4);
		printf("生成static对象\n");
		static WithCC withCC5(5);
		printf("if语句即将结束!\n");
	}
	WithCC* withCC6 = new WithCC(6);
	//delete withCC_new;
	printf("main函数结束!\n");
	return 0;
}