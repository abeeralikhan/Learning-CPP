#include <iostream>
#include <string>

using namespace std;

class Camera {
    protected:
        int megaPixles, noOfPhotos = 0;
        float arpeture;

        void setCamera(int mp, float arp) {
            megaPixles = mp;
            arpeture = arp;
        }

    public:
        int getMPs() {
            return megaPixles;
        }

        float getARP() {
            return arpeture;
        }

        void takePhoto() {
            noOfPhotos++;
            cout << "A photo has been captured!" << endl << "Now, you have " << noOfPhotos
            << " photo(s) in your mobile's gallery." << endl; 
        }

        void displayCameraDetails() {
            cout << megaPixles << "MPs, and " << arpeture << "f Arpeture. " << endl;
        }
};

class MusicPlayer {
    protected:
        int i;
        string playlist[10];

    public:
        MusicPlayer(){i = 0;}
        void addSong(string title) {
            playlist[i] = title;
            i++;
            cout << title << " Has succesfully added into the playlist!" << endl;
        }

        void displayPlaylist() {
            cout << "Playlist currently has " << i << " song(s)" << endl;

            for(int j = 0; j < i; j++) {
                cout << j+1 << ") " << playlist[j] << endl;
            }
        }
};

// Performing multiple inheritance in line below
class SmartPhone: public Camera, public MusicPlayer {
    protected:
        int batteryInMah, screenSizeinIn, touchCapacity;

    public:
        void setMobileSpecs(int battery, int screen, int tuchCap) {
            batteryInMah = battery;
            screenSizeinIn = screen;
            touchCapacity = tuchCap;
            setCamera(20, 1.9);
        }

        void displaySpecs() {
            cout << batteryInMah << "Mah, " << screenSizeinIn << " inches, and " << touchCapacity << " touches." << endl;
            displayCameraDetails();
        }
};

int main() {
    SmartPhone Mi11Lite;

    Mi11Lite.setMobileSpecs(4400, 6.87, 10);
    Mi11Lite.addSong("Runaway");
    Mi11Lite.addSong("Jalebi Baby");
    Mi11Lite.addSong("Pillow Talk");

    Mi11Lite.takePhoto();
    Mi11Lite.takePhoto();

    Mi11Lite.displayPlaylist();
    Mi11Lite.displaySpecs();

    return 0;
}