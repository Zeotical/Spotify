#include <iostream>
#include "top_songs.h"
#include <vector>
using namespace std;

void vshalTopSongs() {
    int genreChoice;
    cout << "\n=== Top Songs of the Month ===\n";
    cout << "Select a genre:\n";
    cout << "1. Pop\n2. Rock\n3. Hip-Hop/R&B\n";
    cout << "Enter your choice: ";
    cin >> genreChoice;

    vector<string> pop = {
        "Blinding Lights - The Weeknd",
        "Shape of You - Ed Sheeran",
        "As It Was - Harry Styles",
        "Levitating - Dua Lipa",
        "Flowers - Miley Cyrus"
    };

    vector<string> rock = {
        "Bohemian Rhapsody - Queen",
        "Smells Like Teen Spirit - Nirvana",
        "Hotel California - Eagles",
        "Enter Sandman - Metallica",
        "Numb - Linkin Park"
    };

    vector<string> hiphop = {
        "Lose Yourself - Eminem",
        "SICKO MODE - Travis Scott",
        "HUMBLE - Kendrick Lamar",
        "God’s Plan - Drake",
        "Old Town Road - Lil Nas X"
    };

    cout << "\nTop Songs:\n";

    switch(genreChoice) {
        case 1:
            for(int i = 0; i < pop.size(); i++)
                cout << i+1 << ". " << pop[i] << endl;
            break;
        case 2:
            for(int i = 0; i < rock.size(); i++)
                cout << i+1 << ". " << rock[i] << endl;
            break;
        case 3:
            for(int i = 0; i < hiphop.size(); i++)
                cout << i+1 << ". " << hiphop[i] << endl;
            break;
        default:
            cout << "Invalid choice! Please select 1–3.\n";
    }
}
