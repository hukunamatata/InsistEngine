#pragma once

#ifdef INSIST_PLATFORM_WINDOWS

extern Insist::Application* Insist::CreateApplication();

int main(int argc, char** argv)
{
	Insist::Log::Init();
	INSIST_CORE_INFO("Init Log");
	INSIST_CLIENT_INFO("Client Log");

	auto pApp = Insist::CreateApplication();
	if (pApp == nullptr)
	{
		return 0;
	}

	pApp->Run();
	delete pApp;
}

#endif