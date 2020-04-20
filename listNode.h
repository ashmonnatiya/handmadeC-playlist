// natiya ashmon
#include "Song.h"
#include <ctime>
#include <cstdlib>
using namespace std;
class ListNode // this is the list node class it holds the pointers
{

  public: 
  Song data; // the type Song is assigned data this stores the content of Song
  ListNode *next; // declaring next aas a pointer to the listNode object

  // ListNode constructor makes a new ListNode
  ListNode (Song content ) // this is 
  {
    data = content; // data is storing content song object
    next = nullptr; // this is blank for now
  }

}; // end of class

class Playlist{ // this is the linkedlist class
   public: 
    ListNode * head; //pointing to the head
    ListNode * tail; //pointing to the tail
    int size;
  Playlist(){
   
    head = nullptr; //head is empty
    tail = nullptr; // tail is empty
    size = 0; // size is 0
    
  }
 
void append(Song songToadd){ // this is the method to append songs to your linkedlist
   ListNode * newSongPtr = new ListNode(songToadd); // this is the pointer newSong 
  if (size ==0){ // if size is set to 0 then the list is empty
    tail = newSongPtr;// both the tail and head will store the memory adress of the pointer
    head = newSongPtr;
    size++; // the size increase
 
}
  else{ // if size is not 0 then that means that there are songs stored
    tail -> next = newSongPtr;// next is pointing to the node just added
    tail = newSongPtr; // the last node is now pointing to the node that was just added
    size++; // size increments

  }
} 
 void print_playlist(){ // this is the method print playlist
    
   if (size ==0){ //if the size of the playlist is 0 it returns an error
      cout<<"Error 404 no songs were found"<<endl;
    }
    else{ 

     ListNode * printer = head; // printer is declared it is pointing to ListNode object points to the first one in the list
    
     
     while (printer != nullptr){ // while the printer is not pointing to null 
     Song temp = printer -> data; // the song is going to be added to the contents of song
     cout<<temp.to_string()<<endl;// this is printing out the content of temp and calling it from the Song string
     printer = printer -> next; // printer is pointing to the next song
    }
    }
       
      }
  
  Song item_at(int index){ // this is the method item at it is the index counter
    ListNode *item_getter = head; // creates item_getter pointer it is pointing to the first item in the ListNode object
    int index_count =0; // index_count is set to 0
    while (item_getter != nullptr){ // while the the pointer is not equal to null printer and if the index is equal to the index count the item_getter is going to return the content of the ListNode
       if (index == index_count)
       {
          return item_getter-> data;
    }
    else{ // if not the index count is increased and item getter is going to the next item and the index is going up
      index_count++;
      item_getter = item_getter -> next;
      
    }
    
      
    }
      return Song(); // returns empty song if the index does not match the item given
  }
  void shuffle_playlist(){ // this is the shuffle playlist method
      
      srand(time(NULL)); // this is the random number generator that makes sure you get a different random number every time
       
      int num = size*(static_cast<float>(rand())/ static_cast<float>(RAND_MAX));
      //Song shufsong = playlist.item_at(num); // this is calling the size of the playlist
      //cout<<static_cast<float>(rand())/static_cast<float>(RAND_MAX)<<endl;
      item_at(num);
      cout<<"Your random song is:";
      cout<<item_at(num).to_string()<<endl; // this is printing the random number of
  }
  
 
 
 
 
 
  void search_playlist(string s_title){ // this is the search playlist method it takes a string song title

   Playlist lookupSongs = Playlist(); // creates a new linked list for the song that you search for

   if (size ==0){ // if the size of the linked list is 0, there are no songs to be searched for and a blank will be printed
     cout<<" "<<endl;
    }
    else{ // a pointer named searched song is pointing to the first item in the list
      ListNode * searched_song = head;
      while(searched_song != nullptr) // while the pointer is not pointing to anything 
      {
        Song temp = searched_song -> data; // the current song is pointing to the content of song
        if(temp.get_Title() == s_title){ // if the title of the song matches the search song then it is added to the linked list
          lookupSongs.append(temp);
          cout<<"You searched for" + s_title << endl; // this prints out what song was searched for in the playlist 
        }
          searched_song = searched_song-> next;// this points to the next song while the song is not found
      }
    }
    

    



  }

 };
  
   