// MathClient.cpp : Client app for MathLibrary DLL.
#include <iostream>
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include "EngineLibrary.h"
#include <thread>

int main()
{
	int mutex = 0;
	char Title[] = "My title";
	int typeOfGameManager = 1;
	GameManager* MyGameManager = new GameManager(Title, typeOfGameManager);// game start up
	// game execute

	MyGameManager->StartUp(&mutex);
	while (mutex != 0)
	{
		printf("threads working without out from main\n");
	}
	//MyGameManager->~GameManager(); // game shut down

}