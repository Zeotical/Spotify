#include <iostream>
#include <vector>
#include "most_streamed.h"
using namespace std;

int ans; 
int score = 0;

void pop(int q_no){
// Questions for Pop genre
vector <string> question = {"1)Blinding Lights - The Weeknd 2)Shape of You - Ed Sheeran",
                            "1)Someone You Loved - Lewis Capaldi 2)Starboy - The Weeknd ft. Daft Punk", 
                            "1)Sweater Weather - The Neighbourhood 2)As It Was - Harry Styles",
                            "1)One Dance - Drake ft. Wizkid & Kyla 2)Sunflower - Post Malone & Swae Lee",
                            "1)Stay - The Kid Laroi & Justin Bieber 2)Perfect - Ed Sheeran" } ;
cout << "Q" << q_no << ". " << question[--q_no] << endl; // Questions display
// Answers for Pop genre
vector <int> answer = {1, 2, 2, 2, 1};

//User input for answer
while(ans != 1 && ans!= 2) {
cout << "Enter your answer (1 or 2): ";
cin >> ans ; 

if (ans != 1 && ans!= 2){
    cout << "This is an invalid answer. Try again.\n" ;
}
}

if (ans == answer[q_no]){
    cout << "Correct!\n" ;
    score++;
}
else {
    cout << "Wrong.\n" ;
}
ans = 0;

}

void rock(int q_no){
// Questions for rock genre
vector <string> question = {"1)Stressed Out - Twenty One Pilots 2)Bohemian Rhapsody (2011 Remaster) - Queen",
                            "1)Smells Like Teen Spirit - Nirvana 2)Don't Stop Me Now (2011 Remaster) - Queen",
                            "1)Don't Stop Believin' - Journey 2)In The End - Linkin Park",
                            "1)Another One Bites The Dust (2011 Remaster) - Queen 2) Heathens - Twenty One Pilots",
                            "1)Ride - Twenty One Pilots 2)Sweet Child O' Mine - Guns N' Roses",} ;
cout << "Q" << q_no << ". " << question[--q_no] << endl; // Questions display

// Answers for rock genre
vector <int> answer = {2, 1, 2, 1, 2};

//User input for answer
while(ans != 1 && ans!= 2) {
cout << "Enter your answer (1 or 2): ";
cin >> ans ; 

if (ans != 1 && ans!= 2){
    cout << "This is an invalid answer. Try again.\n" ;
}
}

if (ans == answer[q_no]){
    cout << "Correct!\n" ;
    score++;
}
else {
    cout << "Wrong.\n" ;
}
ans = 0;

}

void kpop(int q_no){
// Questions for Kpop genre
vector <string> question = {"1)Dynamite - BTS 2)Seven - Jungkook",
                            "1)Butter - BTS 2)My Universe - BTS",
                            "1)Money - Lisa 2)Boy with Luv - BTS",
                            "1)Left and Right - Jungkook 2)How You Like That - Blackpink",
                            "1)Like Crazy - Jimin 2)Kill This Love - Blackpink"} ;
cout << "Q" << q_no << ". " << question[--q_no] << endl; // Questions display

// Answers for Kpop genre
vector <int> answer = {1, 1, 2, 2, 1};

//User input for answer
while(ans != 1 && ans!= 2) {
cout << "Enter your answer (1 or 2): ";
cin >> ans ; 

if (ans != 1 && ans!= 2){
    cout << "This is an invalid answer. Try again.\n" ;
}
}

if (ans == answer[q_no]){
    cout << "Correct!\n" ;
    score++;
}
else {
    cout << "Wrong.\n" ;
}
ans = 0;

}

void mixed(int q_no){
// Questions for mixed genre
vector <string> question = {"1)The Night We Met - Lord Huron 2)I Wanna Be Yours - Arctic Monkeys ",
    "1)OMG - NewJeans 2)Shut Down - Blackpink",
"1)Believer - Imagine Dragons 2)Heat Waves - Glass Animals",
"1)Lovely - Billie Eilish & Khalid 2)Closer - The Chainsmokers ft. Halsey",
"1)Fake Love - BTS 2)Cupid - Twin Version - Fifty Fifty "} ;

cout << "Q" << q_no << ". " << question[--q_no] << endl; // Questions display
// Answers for mixed genre

vector <int> answer = {2, 2, 1, 1, 2};

//User input for answer
while(ans != 1 && ans!= 2) {
cout << "Enter your answer (1 or 2): ";
cin >> ans ; 

if (ans != 1 && ans!= 2){
    cout << "This is an invalid answer. Try again.\n" ;
}
}

if (ans == answer[q_no]){
    cout << "Correct!\n" ;
    score++;
}
else {
    cout << "Wrong.\n" ;
}
ans = 0;

}

void mostStreamedSongGuess() {
    int choice;
    int q_no = 1;
    cout << "Guess The Most Streamed Song!\n";
    // Genre Selection
    cout << "Select a genre:\n" ;
    cout << "1.Pop\n2.Rock\n3.K-Pop\n4.Mixed Genres\n";
    // User choice input
    cout << "Enter your choice: ";
    cin>> choice;
   //Game starts, calling func based on user choice 
   do { 
   if (choice == 1) {
    pop(q_no);
   }
   else if (choice == 2) {
    rock(q_no);
   }
   else if (choice == 3) {
    kpop(q_no);
   }
   else if (choice == 4) {
    mixed(q_no); 
   }
    q_no++;
} while(q_no<6); // Up to 5 questions asked only.

//Total Score
cout << "Your total score is " << score << " out of " << --q_no << ".\n";
}
