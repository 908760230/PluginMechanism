#ifndef EXPLORE_APPLICATION_H
#define EXPLORE_APPLICATION_H

#include "Prerequisites.h"
#include "PluginManager.h"

namespace Explore
{
class Application
{
public:
    bool Init();
    bool Awake();
    bool Excute();
    bool Finalize();
    bool Shutdown();

    void LoadConfig();
    void LoadPlugins();

    private:
};
} // namespace Explore

#endif // ! EXPLORE_APPLICATION_H
