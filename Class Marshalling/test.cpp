#include <iostream>
#include "marshall.hpp"

using std::cout;

int main()
{
    Foo f1 = Foo("string");
    cout << f1.getBar();
}