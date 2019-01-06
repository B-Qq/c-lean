#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <string.h>

//一个单例的能够动态分配能存的字符串
class mystring
{
public:
    static mystring *make_mystring(const char *s);
    static void destroy_mystring();
    ~mystring();
    void set_string(const char * s);
    const char *get_string() const;
protected:
    mystring();
    mystring(const char *s);
    mystring(const mystring&it);
 private:
    char *s;
    static mystring *self;
};

#endif // MYSTRING_H
