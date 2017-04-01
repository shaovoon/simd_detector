// NetSIMD.h

#pragma once

#include "../SIMD_lib/SIMD.h"

using namespace System;

namespace NetSIMD {

	public ref class SIMD_Detector
	{
	public:
		SIMD_Detector();
		~SIMD_Detector();
		!SIMD_Detector();

		property System::String^ CPUModel
		{
			System::String^ get();
		}

		// Intel SIMDs
		property System::Boolean MMX
		{
			System::Boolean get();
		}
		property System::Boolean SSE
		{
			System::Boolean get();
		}
		property System::Boolean SSE2
		{
			System::Boolean get();
		}
		property System::Boolean SSE3
		{
			System::Boolean get();
		}
		property System::Boolean SSSE3
		{
			System::Boolean get();
		}
		property System::Boolean SSE41
		{
			System::Boolean get();
		}
		property System::Boolean SSE42
		{
			System::Boolean get();
		}
		property System::Boolean AES
		{
			System::Boolean get();
		}
		property System::Boolean AVX
		{
			System::Boolean get();
		}
		// AMD SIMDs
		property System::Boolean MMXplus
		{
			System::Boolean get();
		}
		property System::Boolean ThreeDnow
		{
			System::Boolean get();
		}
		property System::Boolean ThreeDnowExt
		{
			System::Boolean get();
		}
		property System::Boolean SSE4a
		{
			System::Boolean get();
		}
		property System::Boolean SSE5
		{
			System::Boolean get();
		}

	private:
		SIMD* m_pSIMD;
		
	};
}
