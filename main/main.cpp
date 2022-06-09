#include "Application.h"
using namespace Explore;

int main(int argc, char *agrv[])
{
    Application app;
    app.Init();
    app.Awake();

    bool flag = true;
    while (flag)
    {
        flag = app.Excute();
    }
    

    app.Finalize();
    app.Shutdown();
    return 0;
}