#include "signal.h"

signall*signall::p = NULL;

signall::signall()
{
    cout << "构造" << endl;
}

signall *signall::make_signal()
{
    if (p == NULL)
    {
        p = new signall;
    }
    return p;
}

void signall::desdroy_signal()
{
    delete p;
    p = NULL;
    cout << "deelete" << endl;
}


