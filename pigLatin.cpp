#include <iostream>

#include <string>

using namespace std;

bool isVowel(char);

bool firstLetterIsVowel(string);

bool firstSoundQU(string);

int vowelPosition(string);

string pigLatinWord(string);

string pigLatinSentence(string);

int main()
{
     	string mySentence;

     	cout << "Pig Latin is a word game where for every word in the English Language," << endl;
        cout << "the first letter is dropped, and added to the end of the word, along with the sound 'ay'." << endl;
        cout << "This program will take any word you enter, and turn it into a Pig Latin word." << endl;
        cout << "Please enter a word below." << endl;
        cout << endl;
   	getline(cin, mySentence);

     	cout << "Your word is " << mySentence << "." << endl;
     	cout << endl;

	mySentence = pigLatinWord(mySentence);	

     	cout << "Your word in Pig Latin is " << mySentence << "." << endl;

     	return 0;
}

// Checks to see if letters in the word are vowels
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
		case 'Y':
		case 'y':
			return true;
		default:
			return false;
	}
}

// Boolean that returns true if the first letter of a word is a vowel and false if it is a consonant.
bool firstLetterIsVowel(string str)
{
	char ch = str[0];
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

// Boolean to account for the special case of words that have a beginning sound of "qu" or "squ"
bool firstSoundQU(string str)
{
	if (((str[0] == 'Q') || (str[0] == 'q')) && (str[1] == 'u'))
	{
		return true;
	}
	else if (((str[0] == 'S') || (str[0] == 's')) && (str[1] == 'q') && (str[2] == 'u'))
	{
		return true;
	}
	else
	{
		return false;
	}
}


// Checks to see if the first letter of the word is a vowel, returns an int called counter.
// If first letter is a vowel, the counter returns 0, because that it the first vowel's position.
// If it is not a vowel, the for loop checks the letters starting from position 0 until the end of the word.
// Then, it returns the position of the first vowel of the word as counter.
int vowelPosition(string str)
{
	int counter; // Position of the first vowel of the word
	// Checks to see if the first letter of the word is a consonant
	if (!(firstLetterIsVowel(str)))
	{
		if (firstSoundQU(str))
		{
			if ((str[0] == 'S') || (str[0] == 's'))
			{
				counter = 3;
			}
			else if ((str[0] == 'Q') || (str[0] == 'q'))
			{
				counter = 2;
			}
		}
		else
		{
			for (int i = 1; i <= str.length(); i++)
			{
				if (isVowel(str[i])) break;
				counter = i + 1;
			}
		}
	}
	else
	{
		counter = 0;
	}
	return counter;
}

// Using the int value of the position of the first vowel, translates the word to Pig Latin.
string pigLatinWord(string str)
{
	// Position of first vowel
	int vowel = vowelPosition(str);
	if(vowel == 0)
	{
		// If a vowel is the first letter of the word, simply add "way" to the end.
		str = str + "way";
	}
	// If the first letter is a consonant, take the first consonant sound and add it to the end of the word, plus "ay"
	else
	{
		string restOfWord = str.substr(vowel, str.length()); // From first vowel, to the end of the word
		string consonantSound = str.substr(0, vowel); // From the first letter of the word, to the first vowel
		str = restOfWord + consonantSound + "ay"; // Combines all three parts to make the Pig Latin word
	}
	return str;
}

string pigLatinSentence(string)
{












}
