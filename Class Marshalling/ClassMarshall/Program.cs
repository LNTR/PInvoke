using System.Runtime.InteropServices;

namespace ClassMarshall
{
    public class Program
    {
        [DllImport("libMarshall.dll", EntryPoint = "createFoo", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr CreateFoo(string Name);

        static void Main(string[] args)
        {
            CreateFoo("Test");

        }
    }
}
