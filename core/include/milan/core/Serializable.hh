#ifndef __MILAN_CORE_SERIALIZABLE_H__
#define __MILAN_CORE_SERIALIZABLE_H__

#include "cereal/cereal.hpp"

namespace milan
{

class Serializable
{
    protected:
    public:
        virtual void load() = 0;
};

}

#endif
