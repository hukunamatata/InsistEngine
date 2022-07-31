#pragma once

#include "Application.h"

#ifdef INSIST_PLATFORM_WINDOWS

extern Insist::Application* Insist::CreateApplication();

int main(int argc, char** argv)
{
	auto pApp = Insist::CreateApplication();
	if (pApp == nullptr)
	{
		return 0;
	}

	pApp->Run();
	delete pApp;
}

#endif