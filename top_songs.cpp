#include <iostream>
#include <vector>
#include <string>
#include "top_songs.h"

using namespace std;

void vshalTopSongs() {
    vector<string> genres = {"Pop", "Rock", "Hip-Hop/R&B"};
    vector<vector<string>> topSongs = {
        {"Song A1 - Artist A", "Song A2 - Artist B", "Song A3 - Artist C", "Song A4 - Artist D", "Song A5 - Artist E"}, // Pop
        {"Song B1 - Artist F", "Song B2 - Artist G", "Song B3 - Artist H", "Song B4 - Artist I", "Song B5 - Artist J"}, // Rock
        {"Song C1 - Artist K", "Song C2 - Artist L", "Song C3 - Artist M", "Song C4 - Artist N", "Song C5 - Artist O"}  // Hip-Hop/R&B
    };

    int genreChoice;
    cout << "=== Top Songs of the Month ===\n";
    cout << "Select a genre:\n";
    for(int i = 0; i < genres.size(); i++) {
        cout << i+1 << ". " << genres[i] << endl;
    }
    cout << "Enter your choice: ";
    cin >> genreChoice;

    if(genreChoice < 1 || genreChoice > genres.size()) {
        cout << "Invalid genre choice.\n";
        return;
    }

    cout << "\nTop Songs in " << genres[genreChoice-1] << ":\n";
    for(int i = 0; i < topSongs[genreChoice-1].size(); i++) {
        cout << i+1 << ". " << topSongs[genreChoice-1][i] << endl;
    }
}
