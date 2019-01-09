#pragma once

// class call functions by adress from stack

#ifdef ENGINELIBRARY_EXPORTS
#define ENGINELIBRARY_API __declspec(dllexport)
#else
#define ENGINELIBRARY_API __declspec(dllimport)
#endif

class ENGINELIBRARY_API FunctionStack {
	public:
		FunctionStack(int StackSize);
		~FunctionStack();
		int isEmpty(); // check if stack is empty; returns number of functions in stack
		auto push(); // "push" function into stack
	private:
		int StackSize;
		auto execute(); // execute 
};