#pragma once

#ifdef TERMINUS_PLATFORM_WIN

extern Terminus::Application* Terminus::CreateApplication();

int main(int argc, char** argv)
{
	printf("Terminus engine\n");
	auto app = Terminus::CreateApplication();
	app->Run();
	delete app;
}

#endif