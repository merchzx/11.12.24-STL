// 11.12.24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
	/*vector <int> arr{1,2,3,4,5};
	cout << arr[0]<<endl;

	for (auto i = arr.begin(); i != arr.end(); i++)
	{
		cout << *i<<endl;
	}*/



	/*list <int> List{ 1,2,3,4,5 };
	cout << endl;

	List.push_back(100);
	List.push_front(2);

	for (auto i = List.begin(); i != List.end(); i++)
	{
		cout << *i << "\t";
	}*/

	map <string, string> dict;
	bool status = true;
	do 
	{
		cout << "1 - Add\n2 - Search\n3 - Print\n4 - End Programm\n";
		int ch;
		string key, value;
		cin >> ch;
		switch (ch)
		{
		case(1):
			system("cls"); //очистка екрана
			system("color 0B");
			cout << "Enter key - ";
			cin >> key;
			cout << "Enter value - ";
			cin >> value;
			dict.insert(make_pair(key, value));//формирует узел
			break;
		case(2):
			system("color 0A");

			cout << "Enter key - ";
			cin >> key;
			cout << dict.find(key)->second << endl; //вывод найденного значения
			break;
		case(3):
			system("color 0C");

			for (auto i = dict.begin(); i != dict.end(); i++)
			{
				cout << i->first << " - " << i->second << endl;
			}
			break;
		case(4):
			system("color 0D");
			status = false;
			cout << "Goodbye MY NIGGER" << endl;
			cout << "Goodbye MY NIGGER" << endl;
			cout << "Goodbye MY NIGGER" << endl;
			cout << "Goodbye MY NIGGER"<<endl;

		}
	} while (status);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
