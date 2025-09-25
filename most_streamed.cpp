#include <iostream>
#include <vector>
#include "most_streamed.h"
using namespace std;

int ans; 
int score = 0;

void pop(int q_no){
vector <string> question = {"HI","BYe"} ;
cout << q_no++ << ") " << question[q_no] << endl;
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
    int q_no = 0;
    cout << "\nMost Streamed Song Guess Game (Coming Soon!)\n";
    cout << "Guess The Most Streamed Song!\n";
    cout << "Select a genre:\n" ;
    cout << "1.Pop\n2.Rock\n3.K-Hop\n4.Mixed Genres\n";
    cout << "Enter your choice: ";
    cin>> choice;
   do { 
   if (choice == 1) {
    pop(q_no);
    q_no++;
   }
} while(q_no<2);
cout << "Your total score is " << score << " out of " << q_no-- << ".";
}
