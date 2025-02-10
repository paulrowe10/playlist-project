//Paul Rowe
//1/31/25
//Playlist
//Extra: displays amount of songs in playlist
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;
void pause(int seconds);

int main() {
    cout << "                    _ _  __       \n";
    cout << "  _ __   __ _ _   _| (_)/ _|_   _ \n";
    cout << " | '_ \\ / _` | | | | | | |_| | | |\n";
    cout << " | |_) | (_| | |_| | | |  _| |_| |\n";
    cout << " | .__/ \\__,_|\\__,_|_|_|_|  \\__, |\n";
    cout << " |_|                        |___/  \n";
    cout << "       ─GNX: Tour Setlist─" << endl;
    cout << "──────────────────────────────────" << endl;
    vector<string> gnx = {"squabble up", "tv off (feat. Lefty Gunplay)", "luther", "gloria", "30 for 30", "All the Stars" };
    //creating vector
    int count = 1;
    for (auto it = gnx.begin(); it != gnx.end(); ++it) {
        cout << count << " : " << *it << "\n";
        count++;
    }
    //numbers the items in GNX
    
    while (true) {
        cout << "──────────────────────────────────" << endl;
        cout << "a) Select song\n";
        cout << "b) Add song\n";
        cout << "c) Play playlist\n";
        cout << "d) Shuffle\n";
        char choice;
        cin >> choice;
        cin.ignore();
        //prints list for user to select from
    
    switch (choice) {
        case 'a': {
            int song;
            cout << "Enter song (#): ";
            cin >> song;

            if (song > 0 && song <= gnx.size()) {
                cout << "Now playing: " << gnx[song - 1] << endl;
                pause(3);
            } else {
                cout << "Song not found.\n";
            }
            break;
            //allows user to play a song specific from the vector
        }
        case 'b': {
            string newSong;
            cout << "Enter song title: ";
            getline(cin, newSong);
            gnx.push_back(newSong);
            cout << "Total songs: " << gnx.size() << endl;
            int count1 = 1;
            cout << "──────────────────────────────────" << endl;
            for (auto it = gnx.begin(); it != gnx.end(); ++it) {
                cout << count1 << " : " << *it << "\n";
                count1++;
            }
            break;
            //allows user to add a song
        }
        case 'c': {
            for (const string& song : gnx) {
                    cout << "Now playing: " << song << endl;
                    pause(3);
                }
            break;
            //plays playlist
        }
        case 'd': {
            vector<string> shuffle = {};
            vector<string> temp = gnx;
            for(int i = 0; i < gnx.size(); i++){
                int random = rand() % temp.size();
                shuffle.insert(shuffle.begin()+shuffle.size(), temp[random]);
                temp.erase(temp.begin()+random);
                cout << "Now playing: " << shuffle[i] << endl;
                pause(3);
            }
            break;
            //shuffles playlist
        }
    }
    }
}

void pause(int seconds) {
    time_t start_time = time(nullptr);
    string input;

    while (difftime(time(nullptr), start_time) < seconds) {

    }
    //pause method
}

