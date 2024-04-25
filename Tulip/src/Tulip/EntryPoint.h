#pragma once

#include <stdio.h>

#ifdef TP_PLATFORM_WINDOWS

extern Tulip::Application* Tulip::CreateApplication();

int main(int arc, char** argv) {

	//printf("Tulip Engine");
	auto app = Tulip::CreateApplication();
	app->Run();
	delete app;
}

#endif
