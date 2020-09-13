#include <iostream>
#include "Application.h"
#include "Content.h"

int main(int argc, char** argv)
{
	Application application;

	Content::Load();
	application.Run();

	return 0;
}