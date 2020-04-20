#include <iostream>
//Natiya Ashmon
// 09/25
// to make a song class in C++ that print out the artist name, song title, and album title.
using namespace std;
class Song{ // this is the class song that holds the artist, genre, title, album, and runtime
  private: //This sections allows the user to not change the artist name, genre, title of the song, album title, and duration
  string artist;
  string genre;
  string Title;
  string album;
  float duration;
  
public: // this is the Song method it has the parameters artist, genre, album, and duration
 Song(string s_artist, string s_genre, string s_title, string s_album, float s_duration)
{
 artist = s_artist; // declares artist variable
 genre = s_genre; // declares genre variable
 album = s_album; // declares album variable
 duration = s_duration; // declares duration
 Title = s_title; // declares title
 }
 
 
 Song(){ // this is the Song

   artist = ""; // artist to blank
   genre = ""; // genre to blank
   Title = ""; // title to blank
   album = ""; // album to blank
   duration = 0; // sets duration to 0
 }
 Song ( const Song& songTocopy ){ // this is the copy constructor it allows for the linkedlist to know what a Song is 
    artist = songTocopy.artist; // copies artist variable
    Title = songTocopy.Title; //copies title variable
    album =  songTocopy.album; // copies album variable
    genre = songTocopy.genre; // copies genre variable
    duration = songTocopy.duration; // copies duration variable
  }
void set_artist(string s_artist) //sets artist name, gets artist name, and returns it
  {
    artist = s_artist;

  }
  string get_artist() //gets artist name
  {
   return artist;
  }
void set_genre(string s_genre) //sets genre, gets it, and returns it
 {
   genre = s_genre;
  }
 string get_genre() // gets genre
  {
    return genre;
  }
 void set_Title(string s_title) // sets title, gets it, and returns it
{
   Title = s_title;
 }
 string get_Title()
  {
  return Title;
 }
 void set_album(string s_album) // sets, gets, returns album name
  {
    album = s_album;
 } 
   string get_album()
  {
     return album;
  }
    
    void set_duration(float s_duration) // sets, gets, and returns runtime
  {
    duration = s_duration;
  }
 float get_duration()
  {
    return duration;
  } 
   string to_string()
  {// allows you to print the song string and return it
    string song_string = artist + " " +genre+ " "+Title+ " " +album+  " "+ ::to_string(duration);
   return song_string;
  }
  

};
