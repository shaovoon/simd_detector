using System;
using System.Collections.Generic;
using System.Text;
using NetSIMD;

namespace NetConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            SIMD_Detector det = new SIMD_Detector();
            Console.WriteLine("CPU      : {0}", det.CPUModel);
            Console.WriteLine("Intel SIMDs");
            Console.WriteLine("===========");
            Console.WriteLine("MMX      : {0}", det.MMX);
            Console.WriteLine("SSE      : {0}", det.SSE);
            Console.WriteLine("SSE2     : {0}", det.SSE2);
            Console.WriteLine("SSE3     : {0}", det.SSE3);
            Console.WriteLine("SSSE3    : {0}", det.SSSE3);
            Console.WriteLine("SSE4.1   : {0}", det.SSE41);
            Console.WriteLine("SSE4.2   : {0}", det.SSE42);
            Console.WriteLine("AES      : {0}", det.AES);
            Console.WriteLine("AVX      : {0}", det.AVX);
            Console.WriteLine("\nAMD SIMDs");
            Console.WriteLine("=========");
            Console.WriteLine("MMX+     : {0}", det.MMXplus);
            Console.WriteLine("3DNow    : {0}", det.ThreeDnow);
            Console.WriteLine("3DNow+   : {0}", det.ThreeDnowExt);
            Console.WriteLine("SSE4a    : {0}", det.SSE4a);
            Console.WriteLine("SSE5     : {0}", det.SSE5);
            det.Dispose();
        }
    }
}
