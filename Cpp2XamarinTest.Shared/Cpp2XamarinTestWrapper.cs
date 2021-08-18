using System;
using System.Runtime.InteropServices;

namespace Cpp2XamarinTest
{
    internal static class Cpp2XamarinTestWrapper
    {
#if Android
        const string DllName = "libcpp2xamarintestcpp.so";
#elif _WINDOWS
        #error unsupported platform
        const string DllName = "libcpp2xamarintestcpp.dll";
#else
        const string DllName = "__Internal";
#endif

        [DllImport(DllName, EntryPoint = "CreateCpp2XamarinTestClass")]
        internal static extern Cpp2XamarinTestSafeHandle CreateCpp2XamarinTest();

        [DllImport(DllName, EntryPoint = "DisposeCpp2XamarinTestClass")]
        internal static extern void DisposeCpp2XamarinTest(IntPtr ptr);

        [DllImport(DllName, EntryPoint = "Cpp2XamarinTest_CalcSum")]
        internal static extern int CalcSum(Cpp2XamarinTestSafeHandle ptr, int a, int b);
    }
}


