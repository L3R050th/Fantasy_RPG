#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "krieger.h"
#include "charname.h"
#include "klasse.h"

using namespace std;
using namespace Charname;
using namespace Klasse;

int Staerke = 2;
int Intelligenz = 1;
int Geschick = 1;
int Ausdauer = 10;

Krieger::Krieger()
{

}

Krieger::SchicksalK() {
    fstream finK( "Krieger.txt" );
    if (!finK.is_open()) throw runtime_error("Krieger.txt konnte nicht geöffnet werden");
    string line;
    vector<string> tmpKrieger;
    while (getline(finK, line)) {
        tmpKrieger.push_back(line);
    }
    for (const auto &s : tmpKrieger) {
        cout << s << "\n";
    }
}
