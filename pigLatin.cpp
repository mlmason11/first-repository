#include <iostream>

#include <string>

#include <cmath>

using namespace std;

void instruct();

bool isVowel(ch);

string pigLatin(string);

int main()
{
     	string word;

     	void instruct();
     	getline(cin, word);
     	cout << "Your word is " << word << "." << endl;
     	cout << endl;
     	cout << "Your word in Pig Latin is " << pigLatin(word) << "." << endl;

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
     	char ch = regStr[0];
     	bool isVowel(char ch);
     	if (isVowel = true)
     	{
	  	string newString;
          	newString = regstring + "way";
	  	return newString;
     	}
     	else
     	{
		for (int i = 0; i < regStr.length(); i++)
		{
			if (isVowel) break;
			string firstSound;
			firstSound = regStr.substr(0, i);
			string restOfWord;
			restOfWord = regStr.substr((i +1), regStr.length())
			return firstSound;
			return restOfWord;
		}
		string pigLatin;
		pigLatin = restOfWord + firstSound + "ay";		
		return pigLatin;




     	}
}

























