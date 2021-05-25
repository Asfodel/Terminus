#pragma once

#include "Core.h"

namespace Terminus
{
	class TERMINUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:

	};

	Application* CreateApplication();

}