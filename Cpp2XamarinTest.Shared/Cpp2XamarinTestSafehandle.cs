using System;
using Microsoft.Win32.SafeHandles;

namespace Cpp2XamarinTest
{
    internal class Cpp2XamarinTestSafeHandle : SafeHandleZeroOrMinusOneIsInvalid
    {
        public Cpp2XamarinTestSafeHandle() : base(true) { }

        public IntPtr Ptr => handle;
        
        protected override bool ReleaseHandle()
        {
            Cpp2XamarinTestWrapper.DisposeCpp2XamarinTest(handle);
            return true;
        }
    }
}
