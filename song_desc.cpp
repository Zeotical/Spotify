#include <iostream>
#include "song_desc.h"
using namespace std;

// Function to display song and artist descriptions done bye Dinesh Waren.
void dineshSongDesc() {  //Songs lists with genres
    int choice;
    cout << "\nChoose a song to view details:\n";
    cout << "1. Blinding Lights (Pop)\n";
    cout << "2. Shape of You (Pop)\n";
    cout << "3. As It Was (Pop)\n";
    cout << "4. Levitating (Pop)\n";
    cout << "5. Flowers (Pop)\n";
    cout << "6. Bohemian Rhapsody (Rock)\n";
    cout << "7. Smells Like Teen Spirit (Rock)\n";
    cout << "8. Hotel California (Rock)\n";
    cout << "9. Enter Sandman (Rock)\n";
    cout << "10. Numb (Rock)\n";
    cout << "11. Lose Yourself (Hip-Hop)\n";
    cout << "12. SICKO MODE (Hip-Hop)\n";
    cout << "13. HUMBLE (Hip-Hop)\n";
    cout << "14. God’s Plan (Hip-Hop)\n";
    cout << "15. Old Town Road (Hip-Hop)\n";
    cout << "Enter choice (1-15): ";
    cin >> choice;

    switch(choice) {    //Descriptions of songs and artists
        case 1:
            cout << "\nSong: Blinding Lights\n";
            cout << "Artist: The Weeknd\n";
            cout << "Description: Canadian singer, songwriter, and record producer, blending R&B with pop and electronic sounds.\n";
            break;
        case 2:
            cout << "\nSong: Shape of You\n";
            cout << "Artist: Ed Sheeran\n";
            cout << "Description: English singer-songwriter known for heartfelt lyrics and acoustic-pop style.\n";
            break;
        case 3:
            cout << "\nSong: As It Was\n";
            cout << "Artist: Harry Styles\n";
            cout << "Description: Former One Direction member turned solo artist, famous for his soft rock and pop sound.\n";
            break;
        case 4:
            cout << "\nSong: Levitating\n";
            cout << "Artist: Dua Lipa\n";
            cout << "Description: British-Albanian singer with a disco-pop style and strong stage presence.\n";
            break;
        case 5:
            cout << "\nSong: Flowers\n";
            cout << "Artist: Miley Cyrus\n";
            cout << "Description: American singer and actress, praised for her powerful vocals and evolution from teen pop to rock and pop hits.\n";
            break;
        case 6:
            cout << "\nSong: Bohemian Rhapsody\n";
            cout << "Artist: Queen\n";
            cout << "Description: Legendary British rock band fronted by Freddie Mercury, known for theatrical performances and genre-blending music.\n";
            break;
        case 7:
            cout << "\nSong: Smells Like Teen Spirit\n";
            cout << "Artist: Nirvana\n";
            cout << "Description: American grunge band led by Kurt Cobain, credited with bringing alternative rock into mainstream.\n";
            break;
        case 8:
            cout << "\nSong: Hotel California\n";
            cout << "Artist: Eagles\n";
            cout << "Description: American rock band, pioneers of country rock with timeless guitar harmonies.\n";
            break;
        case 9:
            cout << "\nSong: Enter Sandman\n";
            cout << "Artist: Metallica\n";
            cout << "Description: American heavy metal band, one of the most influential in shaping thrash metal worldwide.\n";
            break;
        case 10:
            cout << "\nSong: Numb\n";
            cout << "Artist: Linkin Park\n";
            cout << "Description: American rock band blending nu-metal and rap-rock, fronted by Chester Bennington and Mike Shinoda.\n";
            break;
        case 11:
            cout << "\nSong: Lose Yourself\n";
            cout << "Artist: Eminem\n";
            cout << "Description: American rapper, actor, and record producer, widely regarded as one of the greatest and most influential hip-hop artists.\n";
            break;
        case 12:
            cout << "\nSong: SICKO MODE\n";
            cout << "Artist: Travis Scott\n";
            cout << "Description: American rapper and producer, known for his psychedelic trap beats and innovative sound.\n";
            break;
        case 13:
            cout << "\nSong: HUMBLE\n";
            cout << "Artist: Kendrick Lamar\n";
            cout << "Description: Pulitzer Prize-winning rapper, famous for socially conscious lyrics and storytelling.\n";
            break;
        case 14:
            cout << "\nSong: God’s Plan\n";
            cout << "Artist: Drake\n";
            cout << "Description: Canadian rapper, singer, and entrepreneur, one of the most commercially successful hip-hop artists.\n";
            break;
        case 15:
            cout << "\nSong: Old Town Road\n";
            cout << "Artist: Lil Nas X\n";
            cout << "Description: American rapper and singer who blended country and hip-hop, breaking records with this viral hit.\n";
            break;
        default:
            cout << "Invalid choice! Please select from 1–15.\n";
    }
}