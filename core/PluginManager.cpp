#include "PluginManager.h"

namespace Explore{
PluginManager &PluginManager::Instance()
{
    static PluginManager instance;
    return instance;
}
}
