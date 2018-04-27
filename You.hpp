// Author: You!

#ifndef YOU_HPP
#define YOU_HPP

#include <Foo.hpp>

// work here
#include <iostream>

using namespace std;

ostream & operator << (ostream &out, const Foo &f){
    out << f.getBar();
    return out;
}

#endif // YOU_HPP
