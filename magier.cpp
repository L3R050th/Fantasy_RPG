#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "magier.h"
#include "charname.h"
#include "klasse.h"

using namespace std;
using namespace Charname;
using namespace Klasse;

int Staerke = 1;
int Intelligenz = 4;
int Geschick = 1;
int Ausdauer = 5;

Magier::Magier()
{

}

Magier::SchicksalM() {
    fstream finM( "Magier.txt" );
    if (!finM.is_open()) throw runtime_error("Magier.txt konnte nicht geöffnet werden");
    string line;
    vector<string> tmpMagier;
    while (getline(finM, line)) {
        tmpMagier.push_back(line);
    }
    for (const auto &s : tmpMagier) {
        cout << s << "\n";
    }
}
