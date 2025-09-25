#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <limits>
#include "quiz_songRec.h"

using namespace std;

struct quiz_songRec     // song structure
{
    string name;
    int feeling;
    int motivation;
    int music_age;
};

void quizSongRec()
{
    bool quiz_answered = false;

    vector<quiz_songRec> quiz = {   //song lists
        {"Blinding Lights - The Weeknd", 1, 1, 2},
        {"Shape of You - Ed Sheeran", 3, 2, 2},
        {"As It Was - Harry Styles", 4, 3, 2},
        {"Levitating - Dua Lipa", 1, 2, 2},
        {"Flowers - Miley Cyrus", 2, 2, 2},
        {"Bohemian Rhapsody - Queen", 2, 4, 1},
        {"Smells Like Teen Spirit - Nirvana", 2, 4, 1},
        {"Hotel California - Eagles", 3, 4, 1},
        {"Enter Sandman - Metallica", 1, 1, 1},
        {"Numb - Linkin Park", 4, 3, 1},
        {"Lose Yourself - Eminem", 4, 3, 1},
        {"SICKO MODE - Travis Scott", 1, 1, 2},
        {"HUMBLE - Kendrick Lamar", 1, 1, 2},
        {"God’s Plan - Drake", 4, 3, 2},
        {"Old Town Road - Lil Nas X", 3, 2, 2}
    };

    int feeling_ans, motivation_ans, music_age_ans; // user answers

    while (!quiz_answered)
    {
        feeling_ans = 0, motivation_ans = 0, music_age_ans = 0;

        cout << "\nHow do you usually feel when listening to music?" << endl;
        cout << "1. Energized\n2. Nostalgic\n3. Relaxed\n4. Introspective\n0. Skip question\n" << endl;
        cout << "Enter your choice (0-4): ";
        while (!(cin >> feeling_ans) || feeling_ans < 0 || feeling_ans> 4) {
            cout << "Invalid input. Please enter a number between 0 - 4: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "\nWhat do you want your playlist to do?" << endl;
        cout << "1. Hype me up\n2. Calm me down\n3. Make me reflect\n4. Classical hits\n0. Skip question\n" << endl;
        cout << "Enter your choice (0-4): ";
        while (!(cin >> motivation_ans) || motivation_ans < 0 || motivation_ans> 4) {
            cout << "Invalid input. Please enter a number between 0 - 4: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "\nDo you prefer classic or modern music?" << endl;
        cout << "1. Classic\n2. Modern\n0. Skip question\n" << endl;
        cout << "Enter your choice (0-2): ";
        while (!(cin >> music_age_ans) || music_age_ans < 0 || music_age_ans> 2) {
            cout << "Invalid input. Please enter a number between 0 - 2: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (feeling_ans == 0 && motivation_ans == 0 && music_age_ans == 0)  //if user answers at leat 1 question, then stop loop
        {
            cout << "Oops! You skipped all the questions. Please answer at least one question to get a recommendation." << endl;
            quiz_answered = false;
        }
        else
        {
            quiz_answered = true;
        }
    }

    vector<string> recommended_songs;   // to store matching recomendations

    for (int i = 0; i < quiz.size(); i++)
    {
        if (motivation_ans == 0 && music_age_ans == 0)
        {
            if (feeling_ans == quiz[i].feeling)
            {
                recommended_songs.push_back(quiz[i].name);
            }
        }
        else if (feeling_ans == 0 && music_age_ans == 0)
        {
            if (motivation_ans == quiz[i].motivation)
            {
                recommended_songs.push_back(quiz[i].name);
            }
        }
        else if (feeling_ans == 0 && motivation_ans == 0)
        {
            if (music_age_ans == quiz[i].music_age)
            {
                recommended_songs.push_back(quiz[i].name);
            }
        }
        else if (motivation_ans == 0)
        {
            if (feeling_ans == quiz[i].feeling && music_age_ans == quiz[i].music_age)
            {
                recommended_songs.push_back(quiz[i].name);
            }
        }
        else if (music_age_ans == 0)
        {
            if (feeling_ans == quiz[i].feeling && motivation_ans == quiz[i].motivation)
            {
                recommended_songs.push_back(quiz[i].name);
            }
        }
        else if (feeling_ans == 0)
        {
            if (motivation_ans == quiz[i].motivation && music_age_ans == quiz[i].music_age)
            {
                recommended_songs.push_back(quiz[i].name);
            }
        }
        else if (feeling_ans == quiz[i].feeling && motivation_ans == quiz[i].motivation && music_age_ans == quiz[i].music_age)
        {
            recommended_songs.push_back(quiz[i].name);
        }
        
        
    }
    
    if(!(recommended_songs.empty())) // print recomendations
    {
        cout << "\nBased on your answers, we recommend you listen to: " << endl;
        for (int i = 0; i < recommended_songs.size(); i++)
        {
            cout << recommended_songs[i] << endl;
        }
    }
    else
    {
        cout << "\nSorry, we couldn't find a perfect match for your preferences. Please try again with different answers." << endl;
        return;
    }
}   