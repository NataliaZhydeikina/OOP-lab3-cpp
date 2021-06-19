#include <iostream>
#include "../RowLib/LettersLine.h"
#include <string>
using namespace std;

int main()
{
    LettersLine line1 = LettersLine("abc def ghi");
    LettersLine line2 = LettersLine({ 'j', 'k', 'l', 'm', 'n', 'o'});
    cout << line1.get() << endl;
    cout << line2.get() << endl;
    cout << string(line1.getLetters()) << endl;
    cout << string(line2.getLetters()) << endl;
    cout << line1.getSize() << endl;
    cout << line2.getSize() << endl;
    line1.rightShift();
    line2.rightShift();
    cout << string(line1) << endl;
    cout << string(line2) << endl;
}
