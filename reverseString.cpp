#include <iostream>

#include <string>

using namespace std;

string reverseWord(string);

string reverseWordsInSentence(string);

int main()
{
	string mySentence;

	cout << "This program takes a sentence, reverses the order of the letters in each word" << endl;
	cout << "and prints the sentence with the reversed words in order." << endl;
	cout << "Please enter your sentence below." << endl << endl;
	getline(cin, mySentence);

	cout << "Your sentence is '" << mySentence << "'." << endl << endl;
	
	mySentence = reverseWord(mySentence);

	cout << "Your sentence in reverse is '" << mySentence << "'." << endl;

	return 0;
}

string reverseWord(string)
{
	for(i = str.length(); i >= 0; i--)
	{
		return str[i];
	}
}

string reverseWordsInSentence(string)
{

}
