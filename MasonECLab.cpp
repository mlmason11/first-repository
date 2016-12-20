#include <iostream>


#include <string>

#include <algorithm>

using namespace std;

string upperCaseString(string);

void writeCode(string);

const char english[28] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
			 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ' ' };
string morse[28] =	{ ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
	 		".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "STOP", "\n" };

int main()
{
	string str, copy;

	cout << "This program translates sentences in English, containing only alphabetic characters, blanks, and a period at the end, to Morse Code." << endl;
	cout << "Please enter the sentence you would like translated." << endl;
	getline(cin, str);
	
	copy = str;
	transform(str.begin(), str.end(), str.begin(), ::toupper);

	cout << "Your original message: " << endl << copy << endl;
	
	cout << endl << "Your encoded message: " << endl;
	writeCode(str);
	
	return 0;
}


void writeCode(string message)
{
	for (unsigned int i = 0; i < message.length(); i++)
	{
		for (int j = 0; j < 28; j++)
		{
			if (message.at(i) == english[j])
			{
				if (english[j] != ' ')
				{
					cout <<  morse[j] + ' ';
				}
				else
				{
					cout << morse[j];
				}
			}
		}
	}
}







































