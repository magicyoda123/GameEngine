#include "stdafx.h"
#include "EngineLibrary.h"
#include "stdio.h"
#include "GLFW/glfw3.h"
#include "RenderSystem.h"
#include <thread>
//#include <thread> // threads c++ 11 for other systems

GameManager::GameManager(char *window_name, int typeStartup) {	//start up the manager
	printf("GameManager starts...");

	m_RenderSystem = new RenderSystem(window_name, typeStartup); // set up Render System
	

	//std::thread t1(&RenderSystem::RenderSystemLoop, m_RenderSystem);
	//m_RenderSystem->RenderSystemLoop(); // start Render Loop
	//t1.join();
	
}
GameManager::~GameManager() {	//shut down the manager
		printf("GameManager finish");
}

void GameManager::StartUp()
{
	std::thread t1(&RenderSystem::RenderSystemLoop, m_RenderSystem);
	t1.detach();
	//t1.join();
	//t1.~thread();
}