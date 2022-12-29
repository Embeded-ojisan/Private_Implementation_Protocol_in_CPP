#ifndef PIPOBJECT_H
#define PIPOBJECT_H

#include "macro.hpp"

#include <string>

class PIPObject : GenericObject
{
public:
    PIPObject(void);

    std::string encode(void);
private:
};

PIPObject::PIPObject(void)
{
    ;
}

bool equals(Object object)
{
    ;
}


#endif // PIPOBJECT_H