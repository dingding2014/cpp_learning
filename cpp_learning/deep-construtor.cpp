#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
class Rect
{
public:
    Rect()      // ���캯����pָ����з����һ�ռ�
    {
        p = new int(100);
    }
    Rect(const Rect& r)
    {
        width = r.width;
        height = r.height;
        p = new int;    // Ϊ�¶������¶�̬����ռ�
        *p = *(r.p);
    }
    ~Rect()     // �����������ͷŶ�̬����Ŀռ�
    {
        if(p != NULL)
        {
            delete p;
        }
    }
private:
    int width;
    int height;
    int *p;     // һָ���Ա
};
/*
int main()  
{  
    Rect rect1;  
    Rect rect2(rect1);   // ���ƶ���  
    return 0;  
}
*/