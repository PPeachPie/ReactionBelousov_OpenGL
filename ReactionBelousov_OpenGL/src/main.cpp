#include <iostream>

//#define GLEW_STATIC
//#include <GL/glew.h>

#include <GLFW/GLFW.h>
#include <GLFW/window.h>

int main() 
{
	try 
	{
		GLFW glfw;
		Window window("HOW TO DO REACTION", 800, 500);
		window.loop();
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
		return -1;
	}
	return 0;
}

//// Function prototypes
//void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
//
//// Window dimensions
//const GLuint WIDTH = 1000, HEIGHT = 600;
//
//
///////shaders/////
//
//const GLchar* vertexShaderSource = "#version 330 core\n"
//"layout (location = 0) in vec 3 position;\n"
//"void main()\n"
//"{\n"
//"gl_Position = vec4(position.x, position.y, position.z, 1.0);\n"
//"}\n";
//
//
//const GLchar* fragmentShaderSourse = "#version 330 core\n"
//"out vec4 color;\n"
//"void main()\n"
//"{\n"
//"color = vec4(1.0f, 0.5f, 0.2f, 0.5f)\n"
//"}\n";
//
//
/////////////



// The MAIN function, from here we start the application and run the game loop
//int main()
//{
//	//std::cout << "Starting GLFW context, OpenGL 3.3" << std::endl;
//	// Init GLFW
//	glfwInit();
//
//
//
//	//// Set all the required options for GLFW
//	//glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	//glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//	//glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
//
//	// Create a GLFWwindow object that we can use for GLFW's functions
//	/*GLFWwindow* window = glfwCreateWindow(800, 500, "HOW TO DO FKING REACTION", nullptr, nullptr);
//	if (window == nullptr)
//	{
//		std::cout << "Failed to create GLFW window" << std::endl;
//		glfwTerminate();
//		return -1;
//	}*/
//	//прив€зка к потоку, создание контекста дл€ программы, т.к. опенджл €вл€етс€ стейт машиной
//	//glfwMakeContextCurrent(window);
//
//
//	//// Set the required callback functions
//	//glfwSetKeyCallback(window, key_callback);
//
//	//// Set this to true so GLEW knows to use a modern approach to retrieving function pointers and extensions
//	//glewExperimental = GL_TRUE;
//
//	// Initialize GLEW to setup the OpenGL Function pointers
//	/*if (glewInit() != GLEW_OK)
//	{
//		std::cout << "Failed to initialize GLEW" << std::endl;
//		return -1;
//	}*/
//
//	//// Define the viewport dimensions
//	//int width, height;
//	//glfwGetFramebufferSize(window, &width, &height);
//	//glViewport(0, 0, width, height);
//
//
//	////определение шейдеров объ€вленных cверху
//
//	//GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
//	//glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
//	//glCompileShader(vertexShader);
//
//	//GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//	//glShaderSource(fragmentShader, 1, &fragmentShaderSourse, NULL);
//	//glCompileShader(fragmentShader);
//
//	///////////////////////////////
//
//	///////проверка на наличие ошибок сборки шейдера
//	//GLint success;
//	//GLchar infoLog[512];
//	//glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//	//glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
//
//	////////
//
//	/*GLfloat verticles[] = {
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, -0.5f, 0.0f,
//	};
//
//	GLuint VBO;
//	glGenBuffers(1, &VBO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(verticles), verticles, GL_STATIC_DRAW);*/
//
//	////////////////////////////////
//
//	// event loop
//	//while (!glfwWindowShouldClose(window))
//	//{
//	//	// Check if any events have been activiated (key pressed, mouse moved etc.) and call corresponding response functions
//	//	glfwPollEvents();
//
//	//	// Render
//	//	// Clear the colorbuffer
//	//	glClearColor(0.2f, 0.1f, 0.5f, 0.0f);
//	//	glClear(GL_COLOR_BUFFER_BIT); 
//
//	//	// Swap the screen buffers
//	//	glfwSwapBuffers(window);
//	//}
//
//	// Terminate GLFW, clearing any resources allocated by GLFW.
//	//glfwTerminate();
//	return 0;
//}
//
//// Is called whenever a key is pressed/released via GLFW
////void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
////{
////	std::cout << key << std::endl;
////	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
////		glfwSetWindowShouldClose(window, GL_TRUE);
////}