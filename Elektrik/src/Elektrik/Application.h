#pragma once

#include "Core.h"

namespace Elektrik 
{
	class ELEKTRIK_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in client
	Application* CreateApplication();
}