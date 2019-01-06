#ifndef MAN_H
#define MAN_H

#include <iostream>
using namespace std;

class man
{
public:
    man(const char *_name,const int _age);
    man();
    man(const man &it); //拷贝构造函数，当类中有成员是指针时需要使用此构造.
    explicit man(const int _age);  //explicit防止编译器将 man m = 2; 理解为man(int _age) 构造函数
    ~man();
    int set_name(const char *_name);
    char * get_name() const; //const 确保不会改变类成员变量的值
    int set_age(const int _age);
    int get_age() const;
    int set_count(const int _count);
    int get_count() const;
    static int show(){cout << "static" << endl;}
private:
    int age;
    char *name;
    static int count; //类的静态成员变量
};

#endif // MAN_H
