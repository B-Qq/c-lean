#include "mystring.h"

mystring *mystring::self = NULL;// 静态成员初始化

mystring *mystring::make_mystring(const char * s)
{
    if (self == NULL)
    {
        if (s == NULL)
        {
            self = new mystring;
        }
        else
        {
            self = new mystring(s);
        }
    }
    return self;
}

void mystring::destroy_mystring()
{
    if (self != NULL)
    {
        delete self;
        self  = NULL;
    }
}

mystring::mystring():s(NULL)
{

}

mystring::mystring(const char *s)//拷贝构造
{
    int len = strlen(s);
    this->s = new char[len + 1];
    strcpy(this->s,s);
    this->s[len] = 0;
    std::cout << "构造函数" << std::endl;
}

mystring::mystring(const mystring &it)
{
    std::cout << "拷贝构造" << std::endl;
    int len = strlen(it.get_string());
    s = new char[len + 1];
    strcpy(s,it.get_string());
    s[len] = 0;//同'\0'意思相同
}

mystring::~mystring()
{
    delete []s;
    std::cout << "析构函数" << std::endl;
}

void mystring::set_string(const char *s)
{
    if (this->s == NULL)
    {
        int len = strlen(s);
        this->s = new char[len + 1];
        strcpy(this->s,s);
        this->s[len] = 0;
    }
    else
    {
        int len1 = strlen(s);
        int len2 = strlen(this->s);
        if (len1 < len2)
        {
            strcpy(this->s,s);
            this->s[len1] = 0;
        }
        else
        {
            delete []this->s; //成员变量分配的空间不足 清空后重新分配
            this->s = new char[len1 + 1];
            strcpy(this->s,s);
            this->s[len1] = 0;
        }
    }
}

const char * mystring::get_string() const
{
    return s;
}
