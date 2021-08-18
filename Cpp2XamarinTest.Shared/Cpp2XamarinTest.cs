using System;
using System.Runtime.InteropServices;

namespace Cpp2XamarinTest
{
    /// <summary>
    /// Analyse von Schießscheiben.
    /// </summary>
    public class Cpp2XamarinTest : IDisposable
    {
        /// <summary>
        /// Handle to the C++-baseclass.
        /// </summary>
        readonly Cpp2XamarinTestSafeHandle handle;
        
        /// <summary>
        /// Initialization.
        /// </summary>
        public Cpp2XamarinTest()
        {
            handle = Cpp2XamarinTestWrapper.CreateCpp2XamarinTest();
        }

        /// <summary>
        /// Implementation of the IDisposable-Interface for deinitializing.
        /// </summary>
        public void Dispose()
        {
            if (null != handle && !handle.IsInvalid)
                handle.Dispose();
            GC.SuppressFinalize(this);
        }

        /// <summary>
        /// Calc sum of two integers.
        /// </summary>
        /// <param name="a">summand a.</param>
        /// <param name="b">summand b.</param>
        /// <returns>sum of a and b.</returns>
        public int CalcSum(int a, int b)
        {
            return Cpp2XamarinTestWrapper.CalcSum(handle, a, b);
        }
    }
}