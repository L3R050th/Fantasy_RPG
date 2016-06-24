#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include "story.h"
//#include "player.h"
#include "umgebung.h"
#include <vector>



    Story::Story()
    {

    }

    Story::Einleitung() {
        fstream finE( "Einleitung.txt" );
        if (!finE.is_open()) throw runtime_error("Einleitung.txt konnte nicht geöffnet werden");
        string line;
        vector<string> tmpEinleitung;
        while (getline(finE, line)) {
            tmpEinleitung.push_back(line);
        }
        for (const auto &s : tmpEinleitung) {
            cout << s << "\n";
        }
    }

    Story::Portal() {
        fstream finE( "Portal.txt" );
        if (!finE.is_open()) throw runtime_error("Einleitung.txt konnte nicht geöffnet werden");
        string line;
        vector<string> tmpEinleitung;
        while (getline(finE, line)) {
            tmpEinleitung.push_back(line);
        }
        for (const auto &s : tmpEinleitung) {
            cout << s << "\n";
        }
    }

    Umschauen::Umgebung();

    /*void Einleitung() {
        fstream finE( "Einleitung.txt" );
        if (!finE.is_open()) throw runtime_error("Einleitung.txt konnte nicht geöffnet werden");
        string line;
        vector<string> tmpEinleitung;
        while (getline(finE, line)) {
            tmpEinleitung.push_back(line);
        }
        for (const auto &s : tmpEinleitung) {
            cout << s << "\n";
        }
    }
    void Einleitung() {
        fstream finE( "Einleitung.txt" );
        if (!finE.is_open()) throw runtime_error("Einleitung.txt konnte nicht geöffnet werden");
        string line;
        vector<string> tmpEinleitung;
        while (getline(finE, line)) {
            tmpEinleitung.push_back(line);
        }
        for (const auto &s : tmpEinleitung) {
            cout << s << "\n";
        }
    }*/

};
