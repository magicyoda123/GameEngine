
// Resource Loader loads external resources and adaptate them for other Systems

#pragma once
#ifdef ENGINELIBRARY_EXPORTS
#define ENGINELIBRARY_API __declspec(dllexport)
#else
#define ENGINELIBRARY_API __declspec(dllimport)
#endif

class ENGINELIBRARY_API ResourceLoader {

public:
	ResourceLoader(); // initialize Resource loader for Game Manager
	~ResourceLoader();// free memory of Resource loader for Game Manager


	int LoadModelStatic(); // load 3D model into the Game. Return value is a pointer to that object or -1 if object cannot be loaded.
	int LoadAnimation();  // load animation into the Game. Return value is a pointer to that object or -1 if object cannot be loaded.
	int LoadSound(); // load sound into the Game. Return value is a pointer to that object or -1 if object cannot be loaded.
	int LoadShader();// load shader into the Game. Return value is a pointer to that object or -1 if object cannot be loaded.
};