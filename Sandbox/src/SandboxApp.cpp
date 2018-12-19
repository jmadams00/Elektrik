#include <Elektrik.h>

class Sandbox : public Elektrik::Application
{
public:
	Sandbox()
	{

	}
	
	~Sandbox()
	{

	}
};

Elektrik::Application* Elektrik::CreateApplication()
{
	return new Sandbox();
}