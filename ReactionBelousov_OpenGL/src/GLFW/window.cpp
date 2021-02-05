#include "Window.h"
#include <GLFW/glfw3.h>
#include <stdexcept>

Window::Window(const std::string &title, int width, int height) 
{
	newWindow = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
	if (!newWindow)
	{
		throw std::runtime_error("Failed to create GLFW window");
	}
}

Window::~Window() 
{
	glfwDestroyWindow(newWindow);
}

void Window::setContextCurrent() 
{
	glfwMakeContextCurrent(newWindow);
}

void Window::loop() 
{
	setContextCurrent();
	while (!glfwWindowShouldClose(newWindow))
	{
		// Check if any events have been activiated (key pressed, mouse moved etc.) and call corresponding response functions
		glfwPollEvents();

		// Render
		// Clear the colorbuffer
		glClearColor(0.2f, 0.1f, 0.5f, 0.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		// Swap the screen buffers
		glfwSwapBuffers(newWindow);
	}
}