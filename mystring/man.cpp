#include "man.h"

int man::count = 1; // 类的静态成员变量的初始化方式
man::man()
{
    name = new char[100];
    age = 10;
    cout << "默认构造" << endl;
};

man::man(const char *_name,const int _age)
{
    name = new char[100];
    strcpy(name,_name);
    age = _age;
    cout << "构造1" << endl;
};

man::man(const int _age)
{
    cout << "aaaa" << endl;
}

man::man(const man &it)
{
    cout << "拷贝构造" << endl;
    name = new char[100];
    strcpy(name, it.get_name());
    age = it.get_age();
}


man::~man()
{
    delete []name;
    cout << "析构函数" << endl;
};

int man::set_age(const int _age)
{
    age = _age;
    return 0;
};

int man::set_name(const char * _name)
{
    strcpy(name,_name);
    return 0;
}

int man::get_age() const
{
    return age;
};

char * man::get_name() const
{
    return name;
};

int man::set_count(const int _count)
{
    count = _count;
    return 0;
}

int man::get_count() const
{
    return count;
}
