#ifndef EXPLORE_PLUGIN_MANAGER_H
#define EXPLORE_PLUGIN_MANAGER_H

#include "Prerequisites.h"

namespace Explore
{
class EXPLORE_API PluginManager
{
public:
    PluginManager &Instance();

private:
    PluginManager();

};
} // namespace Explore

#endif // ! EXPLORE_PLUGIN_MANAGER_H
