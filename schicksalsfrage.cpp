#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "schicksalsfrage.h"
#include "charname.h"
using namespace Charname;
using namespace std;

class Schicksal {
public:
Schicksalsfrage::Schicksalsfrage()
{

}
void Destiny() {
    fstream finS( "Schicksal.txt" );
    if (!finS.is_open()) throw runtime_error("Schicksal.txt konnte nicht geöffnet werden");
    string line;
    vector<string> tmpDestiny;
    while (getline(finS, line)) {
        tmpDestiny.push_back(line);
    }
    for (const auto &s : tmpDestiny) {
        cout << s << "\n";
    }

    cout << tmpDestiny[] << endl;
    cout << tmpDestiny[] << endl;

    cin >> Charname;

    cout << tmpDestiny[] << endl;
    cout << tmpDestiny[] << endl;
    cout << tmpDestiny[] << endl;

    char eingabe;
    cin >> eingabe;

    switch(eingabe) {

        case 'K':
        case 'k':
            void Krieger();
        break;

        case 'M':
        case 'm':
            void Magier();
        break;

        case 'B':
        case 'b':
            void Bogenschuetze();
        break;

    }
}

};
