#include <iostream>

#include <string>

#include <cmath>

using namespace std;

void instruct();

bool isVowel(char);

string pigLatin(string);

int main()
{
     	string word;

     	void instruct();
     	getline(cin, word);

	string pigLatinWord = pigLatin(word);

     	cout << "Your word is " << word << "." << endl;
     	cout << endl;
     	cout << "Your word in Pig Latin is " << pigLatinWord << "." << endl;

     	return 0;
}

void instruct()
{
	cout << "Pig Latin is a word game where for every word in the English Language," << endl;
     	cout << "the first letter is dropped, and added to the end of the word, along with the sound 'ay'." << endl;
     	cout << "This program will take any word you enter, and turn it into a Pig Latin word." << endl;
     	cout << "Please enter a word below." << endl;
     	cout << endl;
}

bool isVowel(char ch)
{
	switch (ch)
     	{
          	case 'A':
	  	case 'a':
	  	case 'E':
	  	case 'e':
	  	case 'I':
          	case 'i':
	  	case 'O':
	  	case 'o':
	  	case 'U':
	  	case 'u':
	       		return true;
	  	default:
	       		return false;
     	}
}

string pigLatin(string regStr)
{
     	
	char ch = regStr.at(0);
     	if (isVowel(ch))
     	{
          	regStr = regStr + "way";
	  	return regStr;
     	}
     	else
     	{
		for (int i = 0; i <= regStr.length(); i++)
		{
			if (isVowel(ch)) break;
			string firstSound;
			firstSound = regStr.substr(0, i);
			string restOfWord;
			restOfWord = regStr.substr((i + 1), regStr.length());
			regStr = restOfWord + firstSound + "ay";		
			return regStr;
		}
     	}
}

























