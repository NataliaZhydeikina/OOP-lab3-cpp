#include "Line.h"

class LettersLine :
	public Line
{
public:
	LettersLine(string line) : Line(line)
	{

	}
	LettersLine(char line[]): Line(string(line))
	{

	}
	string rightShift() {
		string text = get();
		char lastLetter = text[text.size() - 1];
		string substr = text.substr(0, text.size() - 1);
		text = lastLetter + substr;
		set(text);
		return text;
	}
	char* getLetters()
	{
		string myText = get();
		char* arr = new char[myText.size() + 1];
		for (int x = 0; x < sizeof(arr); x++) {
			arr[x] = myText[x];
		}
		return arr;
	}
	void setLetters(char* line)
	{
		set(string(line));
	}
};

