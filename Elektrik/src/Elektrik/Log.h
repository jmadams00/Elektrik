#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Elektrik
{
	class ELEKTRIK_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger> & GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger> & GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core Log Macros
#define EK_CORE_FATAL(...) ::Elektrik::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define EK_CORE_ERROR(...) ::Elektrik::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EK_CORE_WARN(...)  ::Elektrik::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EK_CORE_INFO(...)  ::Elektrik::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EK_CORE_TRACE(...) ::Elektrik::Log::GetCoreLogger()->trace(__VA_ARGS__)

//Client Log Macros
#define EK_FATAL(...) ::Elektrik::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define EK_ERROR(...) ::Elektrik::Log::GetClientLogger()->error(__VA_ARGS__)
#define EK_WARN(...)  ::Elektrik::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EK_INFO(...)  ::Elektrik::Log::GetClientLogger()->info(__VA_ARGS__)
#define EK_TRACE(...) ::Elektrik::Log::GetClientLogger()->trace(__VA_ARGS__)
