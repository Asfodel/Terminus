#include <Terminus.h>

class Game : public Terminus::Application
{
public:
	Game()
	{

	}

	~Game()
	{

	}

};

Terminus::Application* Terminus::CreateApplication()
{
	return new Game();
}