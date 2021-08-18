#pragma once

#ifdef CPP2XAMARINTESTWINDOWS_EXPORTS
#define CPP2XAMARINTEST __declspec(dllexport)
#else
#define CPP2XAMARINTEST
#endif

#include "cpp2xamarintestcpp.h"
using namespace cpp2xamarintestcpp;

extern "C" {
	
	/// <summary>
	/// Create Cpp2XamarinTest-object.
	/// </summary>
	/// <returns>Pointer to Cpp2XamarinTest-object.</returns>
	CPP2XAMARINTEST Cpp2XamarinTest* CreateCpp2XamarinTestClass();

	/// <summary>
	/// dispose Cpp2XamarinTest-object.
	/// </summary>
	/// <param name="ptr">Pointer to Cpp2XamarinTest-object.</param>
	CPP2XAMARINTEST void DisposeCpp2XamarinTestClass(Cpp2XamarinTest* ptr);

	/// <summary>
	/// Calc Sum of two integers.
	/// </summary>
	/// <param name="ptr">Pointer to Cpp2XamarinTest-object.</param>
	/// <param name="a">summand a.</param>
	/// <param name="a">summand b.</param>
	/// <returns>Sum of a and b.</returns>
	CPP2XAMARINTEST int Cpp2XamarinTest_CalcSum(Cpp2XamarinTest* ptr, int a, int b) noexcept;
}
