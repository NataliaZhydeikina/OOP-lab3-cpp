#include <string>

using namespace std;
class Line
{
private:
        string line;
public:
        Line(string line)
        {
            this->line = line;
        }
        int getSize() {
            return line.size();
        }
        string get() {
            return line;
        }
        void set(string line)
        {
            this->line = line;
        }
        operator string() const {
            return line;
        }
};

