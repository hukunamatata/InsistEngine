#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Insist
{
	class INSIST_API Log
	{
	public:
		
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

// core log macros
#define INSIST_CORE_TRACE(...) ::Insist::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define INSIST_CORE_INFO(...)  ::Insist::Log::GetCoreLogger()->info(__VA_ARGS__)
#define INSIST_CORE_WARN(...)  ::Insist::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define INSIST_CORE_ERROR(...) ::Insist::Log::GetCoreLogger()->error(__VA_ARGS__)
#define INSIST_CORE_FATAL(...) ::Insist::Log::GetCoreLogger()->critical(__VA_ARGS__)

// client log macros
#define INSIST_CLIENT_TRACE(...) ::Insist::Log::GetClientLogger()->trace(__VA_ARGS__);
#define INSIST_CLIENT_INFO(...)  ::Insist::Log::GetClientLogger()->info(__VA_ARGS__);
#define INSIST_CLIENT_WARN(...)  ::Insist::Log::GetClientLogger()->warn(__VA_ARGS__);
#define INSIST_CLIENT_ERROR(...) ::Insist::Log::GetClientLogger()->error(__VA_ARGS__);
#define INSIST_CLIENT_FATAL(...) ::Insist::Log::GetClientLogger()->critical(__VA_ARGS__);