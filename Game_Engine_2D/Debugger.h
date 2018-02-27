/*****************************************************************************************************
*	Project: 2D Game Engine
*
*	Author: Dylan Morgan
*
*	File Name: Debugger.h
*
*	Date Created: 2/16/2017
*
*	Last Date Worked On: 3/10/2017
*
*	Project Description: This Project is a code based 2D game engine that will account for common
*						game design needs, ie: physics, data saving and loading, gameobjects,  audio,
*						etc.
*
*	File Description: This is a file that contains methods and members for a debugger that will write
*						to a file and optionally to the console
******************************************************************************************************/
#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
class Debugger
{
private:
	static std::string m_OutFile;
	static int m_LineCounter;
public:
	static void SetOutFile(std::string fileOut);

	static void Log(std::string text, bool writeCout = false);
	static void Log(int num, bool writeCout = false);
	static void Log(float num, bool writeCout = false);
	static void Log(double num, bool writeCout = false);
	static void Log(bool boolean, bool writeCout = false);


	static void ClearLog();
	Debugger() {};
	~Debugger() {};
};

