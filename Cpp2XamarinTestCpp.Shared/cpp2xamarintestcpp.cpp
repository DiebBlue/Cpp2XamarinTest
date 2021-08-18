#include "cpp2xamarintestcpp.h"

#include <chrono>

#define PLATFORM_ANDROID 0
#define PLATFORM_IOS 1
#define PLATFORM_WINDOWS 2

using namespace cpp2xamarintestcpp;

char * Cpp2XamarinTest::GetTemplateInfo()
{
#if PLATFORM == PLATFORM_IOS
	static char info[] = "Platform for iOS";
#elif PLATFORM == PLATFORM_ANDROID
	static char info[] = "Platform for Android";
#elif PLATFORM == PLATFORM_WINDOWS
	static char info[] = "Platform for Windows";
#else
	static char info[] = "Undefined platform";
#endif
	return info;
}

Cpp2XamarinTest::Cpp2XamarinTest() 
{
	
}

Cpp2XamarinTest::~Cpp2XamarinTest() { }

int Cpp2XamarinTest::CalcSum(int a, int b)
{
	return a + b;
}

/////////////////////////////////////////////////////////////////////

