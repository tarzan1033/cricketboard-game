#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numPlayers, numOvers;
    
    cout << "Welcome to the Cricket Scoreboard!" << endl;
    cout << "Enter the number of players: ";
    cin >> numPlayers;
    cout << "Enter the number of overs: ";
    cin >> numOvers;
    
    vector<vector<int>> scoreboard(numPlayers, vector<int>(numOvers, 0));
    
    cout << "Scoreboard initialization:" << endl;
    cout << "--------------------------" << endl;
    cout << "Player\t| ";
    for (int i = 1; i <= numOvers; i++) {
        cout << "O" << i << "\t";
    }
    cout << "| Total" << endl;
    cout << "--------------------------" << endl;
    
    for (int i = 0; i < numPlayers; i++) {
        cout << "Player " << i + 1 << "\t| ";
        for (int j = 0; j < numOvers; j++) {
            cout << scoreboard[i][j] << "\t";
        }
        cout << "| 0" << endl;
    }
    cout << "--------------------------" << endl;
    
    // Input runs for each player in each over
    for (int j = 0; j < numOvers; j++) {
        cout << "Enter runs for over " << j + 1 << ":" << endl;
        for (int i = 0; i < numPlayers; i++) {
            cout << "Player " << i + 1 << ": ";
            cin >> scoreboard[i][j];
        }
        
        // Update the total runs for each player after each over
        cout << "Updated Scoreboard:" << endl;
        cout << "--------------------------" << endl;
        cout << "Player\t| ";
        int total;
        for (int i = 1; i <= numOvers; i++) {
            cout << "O" << i << "\t";
        }
        cout << "| Total" << endl;
        cout << "--------------------------" << endl;
        
        for (int i = 0; i < numPlayers; i++) {
            total = 0;
            cout << "Player " << i + 1 << "\t| ";
            for (int j = 0; j < numOvers; j++) {
                cout << scoreboard[i][j] << "\t";
                total += scoreboard[i][j];
            }
            cout << "| " << total << endl;
        }
        cout << "--------------------------" << endl;
    }
    
    return 0;
}
