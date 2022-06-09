#ifndef EXPLORE_PLUGIN_H
#define EXPLORE_PLUGIN_H

#include "Prerequisites.h"

namespace Explore
{
class EXPLORE_API Plugin
{
public:
    Plugin(){};
    virtual ~Plugin()
    {
    }

    virtual std::string GetName() const = 0;

    virtual void Install()    = 0;
    virtual void Uninstall()  = 0;

    virtual void Initialise() = 0;
    virtual void ShutDown()   = 0;
};
} // namespace Turbo

#endif