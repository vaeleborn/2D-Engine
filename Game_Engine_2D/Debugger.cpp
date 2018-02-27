#include "Debugger.h"

int Debugger::m_LineCounter = 0;
std::string Debugger::m_OutFile = "";

void Debugger::SetOutFile(std::string fileOut)
{
	m_OutFile = fileOut;
}

void Debugger::Log(std::string text, bool writeCout)
{
	if (m_OutFile != "")
	{
		std::ofstream outFile;

		outFile.open(m_OutFile, std::fstream::app);

		if (!outFile.is_open())
		{

		}
		else
		{
			outFile << text << "\n";

			if (writeCout)
				std::cout << text << "\n";
		}
		outFile.close();
	}
}

void Debugger::Log(int num, bool writeCout)
{
	if (m_OutFile != "")
	{
		std::ofstream outFile;

		outFile.open(m_OutFile, std::fstream::app);

		if (!outFile.is_open())
		{

		}
		else
		{
			std::stringstream textStream;
			textStream  << num << "\n";

			outFile << textStream.str();

			if (writeCout)
				std::cout << textStream.str();
		}
		outFile.close();
	}
}

void Debugger::Log(float num, bool writeCout)
{
	if (m_OutFile != "")
	{
		std::ofstream outFile;

		outFile.open(m_OutFile, std::fstream::app);

		if (!outFile.is_open())
		{

		}
		else
		{
			std::stringstream textStream;
			textStream << num << "\n";

			outFile << textStream.str();

			if (writeCout)
				std::cout << textStream.str();
		}
		outFile.close();
	}
}

void Debugger::Log(double num, bool writeCout)
{
	if (m_OutFile != "")
	{
		std::ofstream outFile;

		outFile.open(m_OutFile, std::fstream::app);

		if (!outFile.is_open())
		{

		}
		else
		{
			std::stringstream textStream;
			textStream << num << "\n";

			outFile << textStream.str();

			if (writeCout)
				std::cout << textStream.str();
		}
		outFile.close();
	}
}

void Debugger::Log(bool boolean, bool writeCout)
{
	if (m_OutFile != "")
	{
		std::ofstream outFile;

		outFile.open(m_OutFile, std::fstream::app);

		if (!outFile.is_open())
		{

		}
		else
		{
			std::stringstream textStream;
			if (boolean)
				textStream << "True\n";
			else
				textStream << "False\n";

			outFile << textStream.str();

			if(writeCout)
				std::cout << textStream.str();
		}
		outFile.close();
	}
}

void Debugger::ClearLog()
{
	if (m_OutFile != "")
	{
		std::ofstream outFile;

		outFile.open(m_OutFile);

		if (!outFile.is_open())
		{

		}
		else
		{
			outFile.clear();
		}
		outFile.close();
	}
}
