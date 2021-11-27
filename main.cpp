
#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	cout << "hello" << endl;
	return 0;
}
//int main ()
//{
//
//	const int AR_SIZE = 10;
//	string nameAr[AR_SIZE] = {0};
//	int index;
//	string searchName;
//	int instances;
//	ifstream inFile;
//
//	inFile.open("inputFile.txt");
//
//	cout << "Who do you want to search for (enter done to exit)?\n";
//	getline(cin, searchName);
//
//	while (searchName != "done")
//	{
//
//		instances = 0;
//
//		for(index = 0; index < AR_SIZE; index++)
//		{
//			if(nameAr[index] == searchName)
//			{
//				instances++;
//			}
//		}
//
//		if (instances == 1)
//		{
//			cout << "There is one instance"
//				 << searchName
//				 << endl << endl;
//		}
//
//		cout << "There are "
//				<< instances
//				<< "instances of the name"
//				<< searchName
//				<< endl << endl;
//
//		cout << "Who do you want to search for (enter done to exit)?\n";
//			getline(cin, searchName);
//	}
//
//	inFile.close();
//	cout << "Thank you for using y program.";
//
//	return 0;
//}
