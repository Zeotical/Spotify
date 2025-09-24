#include <iostream>
#include "song_rec.h"
using namespace std;

#include <vector>
#include <cstdlib>
#include <ctime>

void songRecommendation() {
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

    int choice;
    cout << "\nChoose a Genre:\n";
    cout << "1. Pop\n2. Rock\n3. Hip-Hop/R&B\n";
    cout << "Enter choice: ";
    cin >> choice;

    srand(time(0));
    int index;

    if(choice == 1) {
        index = rand() % pop.size();
        cout << "Recommendation: " << pop[index] << endl;
    } else if(choice == 2) {
        index = rand() % rock.size();
        cout << "Recommendation: " << rock[index] << endl;
    } else if(choice == 3) {
        index = rand() % hiphop.size();
        cout << "Recommendation: " << hiphop[index] << endl;
    } else {
        cout << "Invalid choice!\n";
    }
}
