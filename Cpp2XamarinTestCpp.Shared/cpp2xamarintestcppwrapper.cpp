#include "cpp2xamarintestcppwrapper.h"

using namespace cpp2xamarintestcpp;

Cpp2XamarinTest* CreateCpp2XamarinTestClass()
{
	return new Cpp2XamarinTest();
}

void DisposeCpp2XamarinTestClass(Cpp2XamarinTest* ptr)
{
    if (ptr != nullptr) {
        delete ptr;
        ptr = nullptr;
    }
}

int Cpp2XamarinTest_CalcSum(Cpp2XamarinTest* ptr, int a, int b) noexcept
{
    if (nullptr == ptr)
    {
        return -1;
    }

    return ptr->CalcSum(a, b);
}

/////////////////////////////////////////////////////////////////////