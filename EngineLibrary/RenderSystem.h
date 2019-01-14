
// Render system must drow on the screen evrything that comes from Resource Loader
#pragma once

//#include "imgui.h"
#include "Libs/imgui/imgui.h"
#include "Libs/imgui/imgui_impl_glfw.h"
#include "Libs/imgui/imgui_impl_opengl3.h"
#include <stdio.h>
#include <windows.h> // lib for get screen resolution

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#ifdef ENGINELIBRARY_EXPORTS
#define ENGINELIBRARY_API __declspec(dllexport)
#else
#define ENGINELIBRARY_API __declspec(dllimport)
#endif

class ENGINELIBRARY_API RenderSystem { // Render system of our Application
public:
	RenderSystem(char *window_name, int typeStarup);// Constructor of the render system
	// window_name - window name
	// typeStartup - type of the Application
	__int32 addObject(); // add data to the scene; returns objeect id in RenderSystem
	void removeObject(__int32 objectId);  // remove data from the scene
	void RenderSystemLoop(int *mutex); // Render Loop o the Aplication
	~RenderSystem();// destructor of the Render System
	GLFWwindow* m_window; // Window of the Application

};