#include <iostream>

#ifndef MARSHALL
#define MARSHALL
#include "marshall.hpp"
#endif

using std::string, std::endl, std::cout;

Foo::Foo(string name) : _className(name)
{
    cout << _className << " initialized" << endl;
}

void Foo::updateBar()
{
    _bar = _bar.append("+update");
}

string Foo::getBar()
{
    return _bar + " From" + _className;
}

extern "C" __declspec(dllexport) Foo *createFoo(char *bar)
{
    return new Foo(bar);
}