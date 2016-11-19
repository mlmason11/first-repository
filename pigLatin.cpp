#include <iostream>

#include <string>

#include <cmath>

using namespace std;

bool isVowel(char);

int vowelPosition(string);

string pigLatin(string);

int main()
{
     	string mySentence;

     	cout << "Pig Latin is a word game where for every word in the English Language," << endl;
        cout << "the first letter is dropped, and added to the end of the word, along with the sound 'ay'." << endl;
        cout << "This program will take any word you enter, and turn it into a Pig Latin word." << endl;
        cout << "Please enter a word below." << endl;
        cout << endl;
   	getline(cin, mySentence);

     	cout << "Your word is " << word << "." << endl;
     	cout << endl;

	word = pigLatin(mySentence);	

     	cout << "Your word in Pig Latin is " << word << "." << endl;

     	return 0;
}

// Boolean that returns true if the first letter of a word is a vowel and false if it is a consonant.
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

// Checks to see if the first letter of the word is a vowel, returns an int called counter.
// If first letter is a vowel, the counter returns 0, because that it the first vowel's position.
// If it is not a vowel, the for loop checks the letters starting from position 0 until the end of the word.
// Then, it returns the position of the first vowel of the word as counter.
int vowelPosition(string str)
{
	int counter; // Position of the first vowel of the word
	// Checks to see if the first letter of the word is a consonant
	if (!(isVowel(str[0])))
	{
		// Counts the position of each letter of the word until it comes to a vowel
		for (int i = 0; i <= str.length(); i++)
		{
			if(isVowel(str[i])) break;
			counter = i + 1;
		}
	}
	else
	{
		counter = 0;
	}
	return counter;
}

// Using the int value of the position of the first vowel, translates the word to Pig Latin.
string pigLatin(string str)
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
