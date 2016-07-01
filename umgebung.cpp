#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "umgebung.h"
#include "schicksalsfrage.h"

    using namespace std;
    Schicksalsfrage sO;

    Himmelsrichtungen::Himmelsrichtungen()
    {

    }


    void Himmelsrichtungen::Norden() {

            char nav = 'X';

            fstream finN( "Umgebung.txt" );
            if (!finN.is_open()) throw runtime_error("Umgebung.txt konnte nicht geöffnet werden");
            string line;
            vector<string> tmpUmgebung;
            while (getline(finN, line)) {
                tmpUmgebung.push_back(line);
            }
            for (const auto &s : tmpUmgebung) {
                cout << s << "\n";
            }

            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;


            if(nav == 'A' || nav == 'a') {
                Westen();
            }else if (nav == 'D' || nav == 'd') {
                Osten();
            }else if (nav == 'E' || nav == 'e') {
                sO.Destiny();
            }


    }

    void Himmelsrichtungen::Westen() {

            char nav = 'X';

            fstream finW( "Umgebung.txt" );
            if (!finW.is_open()) throw runtime_error("Umgebung.txt konnte nicht geöffnet werden");
            string line;
            vector<string> tmpUmgebung;
            while (getline(finW, line)) {
                tmpUmgebung.push_back(line);
            }
            for (const auto &s : tmpUmgebung) {
                cout << s << "\n";
            }

            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;

            if(nav == 'A' || nav == 'a') {
                Sueden();
            }else if (nav == 'D' || nav == 'd') {
                Norden();
            }else if (nav == 'E' || nav == 'e') {
                sO.Destiny();
            }
    }

    void Himmelsrichtungen::Osten() {

            char nav = 'X';

            fstream finE( "Umgebung.txt" );
            if (!finE.is_open()) throw runtime_error("Umgebung.txt konnte nicht geöffnet werden");
            string line;
            vector<string> tmpUmgebung;
            while (getline(finE, line)) {
                tmpEinleitung.push_back(line);
            }
            for (const auto &s : tmpUmgebung) {
                cout << s << "\n";
            }

            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;

            if(nav == 'A' || nav == 'a') {
                Norden();
            }else if (nav == 'D' || nav == 'd') {
                Sueden();
            }else if (nav == 'E' || nav == 'e') {
                sO.Destiny();
            }
    }

    void Himmelsrichtungen::Sueden() {

            char nav = 'X';


            fstream finE( "Umgebung.txt" );
            if (!finE.is_open()) throw runtime_error("Umgebung.txt konnte nicht geöffnet werden");
            string line;
            vector<string> tmpUmgebung;
            while (getline(finE, line)) {
                tmpUmgebung.push_back(line);
            }
            for (const auto &s : tmpEinleitung) {
                cout << s << "\n";
            }

            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;

            if(nav == 'A' || nav == 'a') {
                Osten();
            }else if (nav == 'D' || nav == 'd') {
                Westen();
            }else if (nav == 'E' || nav == 'e') {
                sO.Destiny();
            }
    }


    Umschauen::Umschauen() {

    }

    void Umschauen::Umgebung() {

            char nav = 'X';

            fstream finU( "Umgebung.txt" );
            if (!finU.is_open()) throw runtime_error("Umgebung.txt konnte nicht geöffnet werden");
            string line;
            vector<string> tmpUmgebung;
            while (getline(finU, line)) {
                tmpUmgebung.push_back(line);
            }
            for (const auto &s : tmpUmgebung) {
                cout << s << "\n";
            }
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;

            Himmelsrichtungen hO;

            if (nav == 'W' || nav == 'w') {
                hO.Norden();
            }else if (nav == 'E' || nav =='e') {
                sO.Destiny();
            }

            if (nav == 'A' || nav == 'a') {
                hO.Westen();
            }else if (nav == 'E' || nav =='e') {
                sO.Destiny();
            }

            if (nav == 'S' || nav == 's') {
                hO.Sueden();
            }else if (nav == 'E' || nav =='e') {
                sO.Destiny();
            }

            if (nav == 'D' || nav == 'd') {
                hO.Osten();
            }else if (nav == 'E' || nav =='e') {
                sO.Destiny();
            }
    }


