#include <fstream>
#include <iomanip>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void GetInput(string &name, int &rounds);
char GetAndCheckPlay(string &name, char &userPlay);
char GetComputerPlay(char computerPlay);
bool CheckWin (char computerPlay, char userPlay);
void OutputWin(string name, bool &userWin);
void OutputMatchWinner(string name, int winCount, int lossCount, int rounds);

int main()
{

	string name;
	int    rounds;
	char   userPlay;
	char   computerPlay;
	int	   winCount;
	int    lossCount;
	bool   userWin;
	int    count;

	GetInput(name, rounds);
	for(count = 0; count <= rounds; count++)
	{
		GetAndCheckPlay(name, userPlay);
		GetComputerPlay(computerPlay);

//		cerr <<  endl << computerPlay << endl;

		CheckWin(computerPlay, userPlay);
		OutputWin (name, userWin);
		if (userWin == 1)
		{
			winCount++;
		}
		else
		{
			lossCount++;
		}
	}
	OutputMatchWinner(name, winCount, lossCount, rounds);
}
