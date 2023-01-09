#pragma once

char** CreatePlayerBoard(int size)
{
	char** areaPlayer = new char* [size];
	for (int i = 0; i < size; i++)
	{
		areaPlayer[i] = new char[size] {};
	}
	return areaPlayer;
}

char** CreateBotBoard(int size)
{
	char** areaPlayer = new char* [size];
	for (int i = 0; i < size; i++)
	{
		areaPlayer[i] = new char[size] {};
	}
	return areaPlayer;
}
