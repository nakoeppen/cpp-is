//Nicholas Koeppen
#include <iostream> 
#include <string>
using namespace std;

//For Part III
class Point {
    private:
        int x, y;
    
    public:
        Point() { //Default Constructor
            x, y = 0;
        }

        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }

        string toString() {
            return to_string(x) + to_string(y);
        }

        Point operator-- (int) {
            x--;
            y--;
            return Point(x,y);
        }
};

void myPrinter(int x);
void myPrinter(string s);

int main() {
    cout << "This is Part I";
    int x;
    x = 5 + 10;
    cout << x;
    string y;
    string m = "Hello, ";
    string n = "World!";
    y = m + n;
    cout << y;

    cout << "This is Part II";
    myPrinter(5);
    myPrinter("Hello");

    cout << "This is Part III";
    Point point(5,3);
    point.toString();
    point--;
    point.toString();
}

void myPrinter(int x) {
    cout << "The value is " + x;
}

void myPrinter(string s) {
    cout << "The string is " + s;
}
