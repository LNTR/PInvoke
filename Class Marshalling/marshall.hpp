#include <iostream>

using std::string;

class Foo
{
public:
    Foo(string name);
    void updateBar();
    string getBar();

private:
    string _bar = "This is bar";
    string _className;
};

extern "C" __declspec(dllexport) Foo *createFoo(char *bar);
