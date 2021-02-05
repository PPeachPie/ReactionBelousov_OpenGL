#pragma once
#include <string>
#include <GLFW/glfw3.h>

class Window 
{
private:
	GLFWwindow* newWindow;
public:
	Window(const std::string &title, int width, int height);
	void setContextCurrent();
	void loop();
	~Window();
};