#ifndef EXPLORE_IMODULE_H
#define EXPLORE_IMODULE_H

namespace Explore {
	struct IModule
	{
		virtual bool Init() = 0;
		virtual bool Awake() = 0;
		virtual bool Excute() = 0;
		virtual bool Finalize() = 0;
		virtual bool Shutdown() = 0;
	};
 }

#endif // !EXPLORE_IMODULE_H
