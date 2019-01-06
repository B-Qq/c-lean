#ifndef SIGNAL_H
#define SIGNAL_H
#include <iostream>
using namespace std;

//利用类的静态成员变量和成员函数实现 单例模式
class signall
{
protected:
    signall();
public:
    static signall *make_signal();
    static void desdroy_signal();
private:
    static signall *p;
};

#endif // SIGNAL_H
