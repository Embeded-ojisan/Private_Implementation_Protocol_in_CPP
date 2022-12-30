#ifndef PIPOBJECT_H
#define PIPOBJECT_H

#include "macro.hpp"

#include "util/GenericObject.hpp"

#include <string>

class PIPObject : public GenericObject
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
    return false;
}


#endif // PIPOBJECT_H