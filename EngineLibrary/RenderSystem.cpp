#pragma once
#include "RenderSystem.h"
#include <stdio.h>
#ifdef ENGINELIBRARY_EXPORTS
#define ENGINELIBRARY_API __declspec(dllexport)
#else
#define ENGINELIBRARY_API __declspec(dllimport)
#endif



RenderSystem::RenderSystem(char *window_name, int typeStartup) {
	GLFWwindow* window;
	/* Initialize the library */
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	//setup values for window parameters
	unsigned __int16 screenWidth, screenHeight; // parameters for window size
	screenWidth = GetSystemMetrics(SM_CXSCREEN);
	screenHeight = GetSystemMetrics(SM_CYSCREEN);

	/* Create a windowed mode window and its OpenGL context */
	// glfwGetPrimaryMonitor() means that window starts in full screen
//	window = glfwCreateWindow(screenWidth, screenHeight, window_name, glfwGetPrimaryMonitor(), NULL);
	window = glfwCreateWindow(800, 500, window_name, NULL, NULL);

	m_window = window; // setup window value to the example of the Class Render System

	// initialize GUI for developer
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();

	ImGuiIO& io = ImGui::GetIO(); (void)io;

	const char* glsl_version = "#version 130";

	// Setup Platform/Renderer bindings
	ImGui_ImplGlfw_InitForOpenGL(m_window, true);
	ImGui_ImplOpenGL3_Init(glsl_version);


	/* Make the window's context current */
	glfwMakeContextCurrent(m_window);
	glfwSwapInterval(1); // Enable vsync
	glewInit();

	
}
RenderSystem::~RenderSystem() {
	glfwTerminate();
}
 __int32 RenderSystem::addObject() { // add data to the scene; returns objeect id in RenderSystem
	 return 0;
}
void RenderSystem::removeObject(__int32 objectId) { // remove data from the scene by objectId

}

void RenderSystem::RenderSystemLoop(){ 
	// Render Loop
	// Loop until the user closes the window 
	while (!glfwWindowShouldClose(m_window))
	{

		// Setup Style
		ImGui::StyleColorsDark();
		bool show_demo_window = true;
		glfwPollEvents();

		// Start the Dear ImGui frame
		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplGlfw_NewFrame();
		ImGui::NewFrame();

		ImGui::ShowDemoWindow(&show_demo_window);

		// Set up IMGUI Render
		ImGui::Render();

		// Render here
		glClearColor(1, 1, 1, 1);
		glClear(GL_COLOR_BUFFER_BIT);

		//	Get from the stack renderable data

		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

		// Swap front and back buffers
		glfwMakeContextCurrent(m_window);
		glfwSwapBuffers(m_window);

	}
	// Cleanup IMGUI
	ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();
	printf("\n I am done!");

//	while(1)
//	printf("a!\n");
}

