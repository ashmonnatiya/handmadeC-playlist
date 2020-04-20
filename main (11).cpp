#include <iostream>
#include "listNode.h"

//Natiya Ashmon
// 09/25








int main() { // this is the main
  Playlist playlist = Playlist(); // this is the linkedlist named playlist
  // these are the songs being added to the playlist
  playlist.append(Song("Beyoncé","Pop", "Sorry", "Lemonade", 3));
  playlist.append(Song("Beyoncé","Pop", "Sandcastles", "Lemonade", 4));
  playlist.append(Song("Beyoncé","Pop", "Daddy Lessons", "Lemonade",  3));


playlist.print_playlist(); // calling the print method to the playlist
playlist.shuffle_playlist(); // calling the shuffle method to the playlist
playlist.search_playlist("Sandcastles"); // calling search to the playlist
}




