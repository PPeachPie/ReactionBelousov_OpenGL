#include "GLFW.h"
#include <GLFW/glfw3.h>
#include <stdexcept>

GLFW::GLFW()
{
	if (!glewInit())
	{
		throw std::runtime_error("Error! Could not initialize GLFW");
	}
}

GLFW::~GLFW() {
	glfwTerminate();
}