// MathClient.cpp : Client app for MathLibrary DLL.
#include <iostream>
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include "EngineLibrary.h"
#include <thread>

int main()
{
	char Title[] = "My title";
	int typeOfGameManager = 1;
	GameManager* MyGameManager = new GameManager(Title, typeOfGameManager);// game start up
	
	// game execute
	
	MyGameManager->~GameManager(); // game shut down

}