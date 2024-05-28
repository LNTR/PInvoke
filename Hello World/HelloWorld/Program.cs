
using System;
using System.Runtime.InteropServices;



namespace MyProject;
class Program
{

    [DllImport("libHelloWorld.dll",EntryPoint ="say_hello" ,CallingConvention = CallingConvention.Cdecl)]
    internal static extern void Say_Hello();


    static void Main(string[] args)
    {
        Say_Hello();
        Console.ReadLine();
    }
}