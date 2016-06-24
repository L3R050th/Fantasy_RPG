#include "umgebung.h"


    Himmelsrichtungen::Himmelsrichtungen()
    {

    }


    Himmelsrichtungen::Norden() {

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
                //Schicksalsfrage
            }


    }

    Himmelsrichtungen::Westen() {

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
                //Schicksalsfrage
            }
    }

    Himmelsrichtungen::Osten() {

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

            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;

            if(nav == 'A' || nav == 'a') {
                Norden();
            }else if (nav == 'D' || nav == 'd') {
                Sueden();
            }else if (nav == 'E' || nav == 'e') {
                //Schicksalsfrage
            }
    }

    Himmelsrichtungen::Sueden() {

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

            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;
            cout << tmpUmgebung[] << endl;

            if(nav == 'A' || nav == 'a') {
                Osten();
            }else if (nav == 'D' || nav == 'd') {
                Westen();
            }else if (nav == 'E' || nav == 'e') {
                //Schicksalsfrage
            }
    }


    Umschauen::Umschauen() {

    }

    Umschauen::Umgebung() {
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

            if (nav == 'W' || nav == 'w') {
                Himmelsrichtungen.Norden();
            }else if (nav == 'E' || nav =='e') {
                //Schicksalsfrage
            }

            if (nav == 'A' || nav = 'a') {
                Himmelsrichtungen.Westen();
            }else if (nav == 'E' || nav =='e') {
                //Schicksalsfrage
            }

            if (nav == 'S' || nav = 's') {
                Himmelsrichtungen.Sueden();
            }else if (nav == 'E' || nav =='e') {
                //Schicksalsfrage
            }

            if (nav == 'D' || nav = 'd') {
                Himmelsrichtungen.Osten();
            }else if (nav == 'E' || nav =='e') {
                //Schicksalsfrage
            }
    }


