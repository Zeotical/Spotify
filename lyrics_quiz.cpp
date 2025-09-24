#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include "lyrics_quiz.h"

using namespace std;

// A structure to hold all parts of a single quiz question
struct QuizQuestion {
    string lyric;
    vector<string> options;
    int correctAnswer; // The correct option number (1, 2, 3, or 4)
};

void izaanLyricsQuiz() {
    // A vector to store all our quiz questions
    vector<QuizQuestion> questions = {
        {
            "\"I said, ooh, I'm blinded by the lights...\"",
            {"1. As It Was", "2. Blinding Lights", "3. Levitating", "4. Shape of You"},
            2
        },
        {
            "\"Is this the real life? Is this just fantasy?...\"",
            {"1. Hotel California", "2. Smells Like Teen Spirit", "3. Bohemian Rhapsody", "4. Enter Sandman"},
            3
        },
        {
            "\"His palms are sweaty, knees weak, arms are heavy...\"",
            {"1. HUMBLE", "2. God's Plan", "3. SICKO MODE", "4. Lose Yourself"},
            4
        },
        {
            "\"I can buy myself flowers, write my name in the sand...\"",
            {"1. Flowers", "2. As It Was", "3. God's Plan", "4. Levitating"},
            1
        },
        {
            "\"I've become so numb, I can't feel you there...\"",
            {"1. Enter Sandman", "2. Numb", "3. Hotel California", "4. Bohemian Rhapsody"},
            2
        }
    };

    int score = 0;
    int userAnswer;

    cout << "\n=== Welcome to the Lyrics Quiz! ===\n";
    cout << "Guess the song from the lyric snippet.\n\n";

    // Loop through each question in the vector
    for (size_t i = 0; i < questions.size(); ++i) {
        cout << "Question " << i + 1 << ":\n";
        cout << questions[i].lyric << endl;

        // Display the options
        for (const auto& option : questions[i].options) {
            cout << option << endl;
        }

        // Get and validate user input
        cout << "Enter your choice (1-4): ";
        while (!(cin >> userAnswer) || userAnswer < 1 || userAnswer > 4) {
            cout << "Invalid input. Please enter a number between 1 and 4: ";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
        }

        // Check the answer
        if (userAnswer == questions[i].correctAnswer) {
            cout << "Correct! 🎉\n\n";
            score++;
        } else {
            cout << "Wrong! The correct answer was: " << questions[i].options[questions[i].correctAnswer - 1] << "\n\n";
        }
    }

    // Display final score
    cout << "=== Quiz Complete! ===\n";
    cout << "Your final score is: " << score << " out of " << questions.size() << endl;
}
