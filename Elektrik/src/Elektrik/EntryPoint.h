#pragma once

#ifdef EK_PLATFORM_WINDOWS

extern Elektrik::Application* Elektrik::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Elektrik::CreateApplication();
	app->Run();
	delete app;
}

#endif