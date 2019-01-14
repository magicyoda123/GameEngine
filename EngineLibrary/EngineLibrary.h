// EngineLibrary.h - Contains declarations of engine functions
#pragma once
#include "RenderSystem.h"



#ifdef ENGINELIBRARY_EXPORTS
#define ENGINELIBRARY_API __declspec(dllexport)
#else
#define ENGINELIBRARY_API __declspec(dllimport)
#endif

// Game Manager manage lifecycle of the Game
class ENGINELIBRARY_API GameManager {
	public:
		GameManager(char *window_name, int typeStartup);	//start up the manager
		~GameManager();	//shut down the manager
		void StartUp(int* mutex);
		RenderSystem* m_RenderSystem; // render system for game manager
};