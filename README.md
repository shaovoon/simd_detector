# simd_detector

This SIMD class helps developers to detect the types of SIMD instruction available on users' processor. It supports Intel and AMD CPUs. It is written in C++.

Available for use in .Net application through C++/CLI wrapper. Now the library supports querying Intel AVX, AES information.

*Note: AMD SSE 4a and SSE 5 detection are not tested! Please kindly help me test if you have the AMD processor with these instructions!*

```C++
// C++
class SIMD
{
  public:
  // Intel SIMD
      bool HasMMX();
      bool HasSSE();
      bool HasSSE2();
      bool HasSSE3();
      bool HasSSSE3();
      bool HasSSE41();
      bool HasSSE42();
      bool HasAES();
      bool HasAVX();
  // AMD SIMD
      bool HasMMXplus();
      bool Has3Dnow();
      bool Has3DnowExt();
      bool HasSSE4a();
      bool HasSSE5();
};
```

```CSharp
// C#
public class SIMD_Detector
{
  public:
  // Intel SIMD
      bool MMX { get; }
      bool SSE { get; }
      bool SSE2 { get; }
      bool SSE3 { get; }
      bool SSSE3 { get; }
      bool SSE41 { get; }
      bool SSE42 { get; }
      bool AES { get; }
      bool AVX { get; }
  // AMD SIMD
      bool MMXplus { get; }
      bool ThreeDnow { get; }
      bool ThreeDnowExt { get; }
      bool SSE4a { get; }
      bool SSE5 { get; }
};
```
