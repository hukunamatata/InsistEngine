#include <Insist.h>

class SandBoxApp : public Insist::Application
{
public:
	SandBoxApp() {}
	~SandBoxApp() {}
};

Insist::Application* Insist::CreateApplication()
{
	return new SandBoxApp();
}