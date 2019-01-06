#include "signal.h"
#include "demo.h"
#include "mystring.h"
int main()
{
    //demo a[3] = {demo(1),demo(2),demo(3)}; //对象数组
    mystring *s = mystring::make_mystring("hello world");
    cout << s->get_string() << endl;
    s->set_string("fuck");
    cout << s->get_string() << endl;
    mystring::destroy_mystring();
    return 0;
}



