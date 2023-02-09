//Nicholas Koeppen
#include <iostream> 
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        cout << i << endl;
        i++;
    }

    cout << "Do you like dogs? Type y for yes and n for no" << endl;
    string answer;
    cin >> answer; 
    if (answer == "y") {
        cout << "Cool! I also like dogs!" << endl;
    } else {
        cout << "I am more of a cat person myself" << endl;
    }
}

void print(string s) {
    cout << s << endl;
}