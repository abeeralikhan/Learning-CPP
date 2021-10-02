/*
-We'll make an ABC class named 'Music Player' - which will have three 'Pure Virtual Functions'.
--play(), add() & edit();
-And, two data members
--playlist & count; Where, playlist represents array of song class objects
Song class --> Title, author, lenght
-Then, we will make two derived classes using this ABC class.
*/
#include <iostream>
#include <string>

using namespace std;

// ABC and supportive classes
class Song;
class MusicPlayer {
    public:
        virtual void add(string, string, float, int) = 0; // do nothing function
        virtual void play(int) = 0;
        virtual void deleteSong(int) = 0;
        // Update title, Update author, Update song_length, Delete Song by ID
        // When song is deleted, marked that index with NULL. Then, as the playlist
        // gets to full, check if there's any NULL indexes. If yes, replace with the new song; 
};

class Song {
    public:
        string title, author;
        float songLength;
        int songID;
        Song() {}
        Song(string t, string a, float sl, int s_id) {
            title = t;
            author = a;
            songLength = sl;
            songID = s_id;
        }
};

// Derived Classes 

class AndroidMusicPlayer: public MusicPlayer {
    protected:
        // We are making an array of pointers type song
        // Initially, those pointers are free, once song is added, these pointers
        // will store addresses of those newly added songs.
        Song *playlist[3];
        int playListSize = 3;
        int count = 0;
        // int i = 0; if(count!=i) then NULL spaces present;

    public:
        void add(string t, string a, float sl, int s_id) {
            cout << "-----Adding-----" << endl;
            if(isFull(playListSize)) {
                playlist[count] = new Song(t, a, sl, s_id);
                count++;
                cout << t << " has succesfully been added into the playlist" << endl <<
                "Now, you have " << count << " song(s) in your playlist" << endl;

            } else {
                cout << "Playlist is full!" << endl;
            }
            cout << "-----------------" << endl;

        }

        void play(int song_id) {
            Song* song_ptr = searchSong(song_id);

            cout << "-----Playing-----" << endl;
            if(song_ptr){
                cout << "Playing " << song_ptr->title << " by " << song_ptr->author << 
                ", " << song_ptr->songLength << " minutes long" << endl; 
            } else {
                cout << "Song is not present in the playlist!" << endl;
            }
            cout << "-----------------" << endl;
            
        }

        void deleteSong(int song_id) {
            Song* song_ptr = searchSong(song_id);

            cout << "-----Deleting-----" << endl;
            if(song_ptr) {
                cout << song_ptr->title << " has been deleted succesfully!" << endl;
                
            } else {
                cout << "Song is not present in the playlist!" << endl;
            }
            cout << "-----------------" << endl;
        }

    private:
        bool isFull(int size) {
            return count < size;
        }

        // To check wether the song is present in our playlist or not
        // If song is present, its pointer going to be returned, otherwise NULL. 
        Song* searchSong(int song_id) {
            bool songFound = false;
            Song *song_ptr;
            int index = 0;

            while(index < playListSize) {
                if(playlist[index]->songID==song_id) {
                    // Fixed: had put '=' instead of '==' hence was causing problem
                    songFound = true;
                    song_ptr = playlist[index];
                    break; // Fixed: I did't put break here before, so was always getting last song.
                }
                index++;
            }

            if(songFound) {
                return song_ptr;
            } else{
                return NULL;
            }
        }
};

int main() {
    AndroidMusicPlayer mi11lite;

    mi11lite.add("a", "b", 3.7, 25);
    mi11lite.add("c", "d", 5.5, 90);
    mi11lite.add("e", "f", 1.5, 101);
    mi11lite.add("e", "f", 1.5, 101); // Playlist is full

    mi11lite.play(101);
    mi11lite.play(90);
    mi11lite.play(40); // Song_id not present in the playlist

    mi11lite.deleteSong(101);
    mi11lite.play(101);

    return 0;
}