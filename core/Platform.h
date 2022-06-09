#ifndef EXPLORE_PLATFORM_H
#define EXPLORE_PLATFORM_H

#ifdef EXPLORE_DLL_EXPORT
#define EXPLORE_API __declspec(dllexport)
#else
#define EXPLORE_API __declspec(dllimport)
#endif

#endif // !EXPLORE_PLATFORM_H
