#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;
	int foo = 0; // AYY
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int unknownCharacters = 0;
	int bar = 0;  // AYY

	int FUBAR = foo + bar; // I added something special for you :^)

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels;
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			++consonants;
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}

	int lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); // Moved this over here since there was no reason to have this at the top.
	int checkSum = unknownCharacters + vowels + consonants + digits + spaces; //  Moved this over here since there was no reason to have this at the top.

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}