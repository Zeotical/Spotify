#include <iostream>
#include <vector>
#include "most_streamed.h"
using namespace std;

int ans; 
int score = 0;

void pop(int q_no){
vector <string> question = {"1)Blinding Lights - The Weeknd 2)Shape of You - Ed Sheeran",
                            "1)Someone You Loved - Lewis Capaldi 2)Starboy - The Weeknd ft. Daft Punk", 
                            "1)Sweater Weather - The Neighbourhood 2)As It Was - Harry Styles",
                            "1)One Dance - Drake ft. Wizkid & Kyla 2)Sunflower - Post Malone & Swae Lee",
                            "1)Stay - The Kid Laroi & Justin Bieber 2)Perfect - Ed Sheeran" } ;
cout << "Q" << q_no << ". " << question[--q_no] << endl;
vector <int> answer = {1, 2, 2, 2, 1};

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
vector <string> question = {"1)Stressed Out - Twenty One Pilots 2)Bohemian Rhapsody (2011 Remaster) - Queen",
                            "1)Smells Like Teen Spirit - Nirvana 2)Don't Stop Me Now (2011 Remaster) - Queen",
                            "1)Don't Stop Believin' - Journey 2)In The End - Linkin Park",
                            "1)Another One Bites The Dust (2011 Remaster) - Queen 2) Heathens - Twenty One Pilots",
                            "1)Ride - Twenty One Pilots 2)Sweet Child O' Mine - Guns N' Roses",} ;
cout <<  "Q" << q_no++ << ". " << ") " << question[q_no] << endl;
vector <int> answer = {2, 1, 2, 1, 2};

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
vector <string> question = {"HI","BYe"} ;
cout << "Q" << q_no++ << ". " << ") " << question[q_no] << endl;
vector <int> answer = {1,2};

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
vector <string> question = {"HI","BYe"} ;
cout << "Q" << q_no++ << ". "  << ") " << question[q_no] << endl;
vector <int> answer = {1,2};

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
    cout << "Select a genre:\n" ;
    cout << "1.Pop\n2.Rock\n3.K-Pop\n4.Mixed Genres\n";
    cout << "Enter your choice: ";
    cin>> choice;
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
} while(q_no<6);
cout << "Your total score is " << score << " out of " << --q_no << ".";
}
