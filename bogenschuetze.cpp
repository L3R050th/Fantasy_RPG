#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "bogenschuetze.h"
#include "charname.h"
#include "klasse.h"

using namespace std;
using namespace Charname;
using namespace Klasse;

int Staerke = 1;
int Intelligenz = 1;
int Geschick = 2;
int Ausdauer = 7;

Bogenschuetze::Bogenschuetze()
{

}

Bogenschuetze::SchicksalB() {
    fstream finB( "Bogenschuetze.txt" );
    if (!finB.is_open()) throw runtime_error("Bogenschuetze.txt konnte nicht geöffnet werden");
    string line;
    vector<string> tmpBogenschuetze;
    while (getline(finB, line)) {
        tmpBogenschuetze.push_back(line);
    }
    for (const auto &s : tmpKrieger) {
        cout << s << "\n";
    }
}
