// TO DO: connect ASsIMP and OpenAL for loading models and sound

#pragma once
#include "ResourceLoader.h"

ResourceLoader::ResourceLoader() { // must contain checking successful working libs for load objects to the Game Manager

}

ResourceLoader::~ResourceLoader() { // must call when the Game Manager finishing work

}

int ResourceLoader::LoadModelStatic() { // method loads static model into RAM memory/ or VRAM and return ID of that object 
	return 0;
}

int ResourceLoader::LoadAnimation() { // method load animated model into RAM/VRAM and return ID of that object
	return 0;
}

int ResourceLoader::LoadShader() { // method load shader and compile it to use it in the future. Returns ID of that object
	return 0;
}

int ResourceLoader::LoadSound() { // method load sound in RAM to use it in the future. Returns ID of that object
	return 0;
}