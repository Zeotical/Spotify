#include <iostream>
#include "top_songs.h"
#include "song_rec.h"
#include "song_desc.h"
#include "lyrics_quiz.h"
#include "most_streamed.h"

using namespace std;

int main() {
    int choice;

    do {
        cout << "=== Song Recommendation Assistant ===\n";
        cout << "1. Song Recommendation\n";
        cout << "2. Song + Artist Description (Dinesh)\n";
        cout << "3. Top Songs of the Month (Vshal)\n";
        cout << "4. Lyrics Quiz (Izaan)\n";
        cout << "5. Most Streamed Song Guess Game\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                songRecommendation();
                break;
            case 2:
                dineshSongDesc();
                break;
            case 3:
                vshalTopSongs();
                break;
            case 4:
                izaaanLyricsQuiz();
                break;
            case 5:
                mostStreamedSongGuess();
                break;
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

        cout << "\n";

    } while(choice != 6);

    return 0;
}
