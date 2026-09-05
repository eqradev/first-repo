#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nWelcome, " << name << "!" << endl;
    cout << "Your C++ setup is working perfectly. 🎉" << endl;

    int x = 15, y = 7;
    cout << "15 * 7 = " << x * y << endl;

    return 0;
}
