#include <vector>
#include<iostream>
#include<string>
using namespace std;

void shiftArray(char arr[]);
int main() {
    char letters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char map[26][26];

    for (int a = 0; a < 26; a++) {
        for (int b = 0; b < 26; b++)
            map[a][b] = letters[b];
        shiftArray(letters);
    }

    //for (int a = 0; a < 26; a++) {
    //    for (int b = 0; b < 26; b++)
    //        cout << map[a][b];
    //    cout << endl;
    //}
    while(1){
    //set up variables----------------------------------------------------
        string message;
        string key;
        string codedMessage;
    //get user inputs----------------------------------------------------
        cout << "Enter Message!" << endl;
    getline(cin, message);
    cout << "Enter Key!" << endl;
    getline(cin, key);
    cout << endl << endl;

    //for each slot in the message array, add the key and store it in the corresponding slot in the coded array
    for (int i = 0; i < message.size(); i++) {
        int a = int(message[i] - 65);
        int b = int(key[i % key.size()] - 65);
        cout << map[a][b];
        codedMessage.append(to_string(char(map[a][b])));
    }
    cout << endl;
    //print out the coded array
    cout << "encoded message:" << endl;
    cout << codedMessage << endl;
    cout << endl << endl;

    //decode by subtracting the key from each slot in the coded array and storing it into the corresponding slot in the decoded array
    cout << "decoded message:" << endl;
    
    cout << endl << endl;
}
}

void shiftArray(char arr[]) {
    char first = arr[0];
    for (int i = 0; i < 25; i++)
        arr[i] = arr[i + 1];
        arr[25] = first;
}
