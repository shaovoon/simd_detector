// This is the main DLL file.

#include "stdafx.h"

#include "NetSIMD.h"

using namespace NetSIMD;

SIMD_Detector::SIMD_Detector()
{
	m_pSIMD = new SIMD();
}

SIMD_Detector::~SIMD_Detector()
{
	this->!SIMD_Detector();
}

SIMD_Detector::!SIMD_Detector()
{
	if(m_pSIMD)
	{
		delete m_pSIMD;
		m_pSIMD = nullptr;
	}
}

System::String^ SIMD_Detector::CPUModel::get()
{
	 System::String^ CPU =  gcnew System::String(m_pSIMD->GetCPUModel().c_str());
	 return CPU;
}

// Intel SIMDs
System::Boolean SIMD_Detector::MMX::get()
{
	return m_pSIMD->HasMMX();
}

System::Boolean SIMD_Detector::SSE::get()
{
	return m_pSIMD->HasSSE();
}

System::Boolean SIMD_Detector::SSE2::get()
{
	return m_pSIMD->HasSSE2();
}

System::Boolean SIMD_Detector::SSE3::get()
{
	return m_pSIMD->HasSSE3();
}

System::Boolean SIMD_Detector::SSSE3::get()
{
	return m_pSIMD->HasSSSE3();
}

System::Boolean SIMD_Detector::SSE41::get()
{
	return m_pSIMD->HasSSE41();
}

System::Boolean SIMD_Detector::SSE42::get()
{
	return m_pSIMD->HasSSE42();
}

System::Boolean SIMD_Detector::AES::get()
{
	return m_pSIMD->HasAES();
}

System::Boolean SIMD_Detector::AVX::get()
{
	return m_pSIMD->HasAVX();
}

// AMD SIMDs
System::Boolean SIMD_Detector::MMXplus::get()
{
	return m_pSIMD->HasMMXplus();
}

System::Boolean SIMD_Detector::ThreeDnow::get()
{
	return m_pSIMD->Has3Dnow();
}

System::Boolean SIMD_Detector::ThreeDnowExt::get()
{
	return m_pSIMD->Has3DnowExt();
}

System::Boolean SIMD_Detector::SSE4a::get()
{
	return m_pSIMD->HasSSE4a();
}

System::Boolean SIMD_Detector::SSE5::get()
{
	return m_pSIMD->HasSSE5();
}
