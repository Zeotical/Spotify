#include <iostream>
#include "top_songs.h"
#include "song_rec.h"
#include "song_desc.h"
#include "lyrics_quiz.h"
#include "most_streamed.h"
#include "quiz_songRec.h"

using namespace std;

int main() {
    int choice;

    do {
        cout << "=== Song Recommendation Assistant ===\n";
        cout << "1. Song Recommendation\n";
        cout << "2. Song + Artist Description (Dinesh)\n";
        cout << "3. Top Songs of the Month (Vshal)\n";
        cout << "4. Quiz to Get Song Recommendation \n";
        cout << "5. Lyrics Quiz (Izaan)\n";
        cout << "6. Most Streamed Song Guess Game\n";
        cout << "7. Exit\n";
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
                quizSongRec();
                break;
            case 5:
                izaanLyricsQuiz();
                break;
            case 6:
                mostStreamedSongGuess();
                break;
            case 7:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

        cout << "\n";

    } while(choice != 7);

    return 0;
}


//g++ main.cpp lyrics_quiz.cpp most_streamed.cpp song_desc.cpp song_rec.cpp top_songs.cpp -o a.exe