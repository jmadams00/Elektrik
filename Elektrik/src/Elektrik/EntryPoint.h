#pragma once

#ifdef EK_PLATFORM_WINDOWS

extern Elektrik::Application* Elektrik::CreateApplication();

int main(int argc, char** argv)
{
	Elektrik::Log::Init();
	EK_CORE_WARN("Initialized Log");
	int a = 5;
	EK_INFO("Hello Var={0}", a);

	auto app = Elektrik::CreateApplication();
	app->Run();
	delete app;
}

#endif