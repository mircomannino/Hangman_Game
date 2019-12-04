#ifndef __HANGMAN_GAME_H__
#define __HANGMAN_GAME_H__

#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>
using namespace std;

class Game {
private:
    vector<pair<char, bool>> currentWord;
    bool finish;
    bool win;
    int currentState;

    // Method to extract a word from a set of words
    void extractWord(string fileName);

    // Methods to check
    bool isFinished();
    bool isWinner();
    vector<int> isInWord(char character);

    // Methods to draw
    void drawWord();
    void draw();

public:
    /* Constructor */
    Game() {
        finish = false;
        win = false;
        currentState = 0;
        extractWord("list_of_words-IT.txt");
    }

    // Main method
    void play();
};

void Game::play() {
    while(!finish && !win) {
        this->draw();
        char newCharacter;
        cout << "\nInsert a character (capital letters only): ";
        cin >> newCharacter;
        vector<int> currentIndexes = isInWord(newCharacter);
        if(currentIndexes.size() > 0) {
            for(int index : currentIndexes) {
                currentWord[index].second = true;
            }
        } else {
            currentState++;
        }
        this->draw();
        finish = isFinished();
        win = isWinner();
    }
    if(win) {
        cout << "\nYou win!!!!!\n";
    }
    if(finish) {
        cout << "\nGame Over\nYou lose!!!\n";
        string currentWordString = "";
        for(auto el : currentWord) {
            currentWordString += el.first;
        }
        cout << "The correct word was: " << currentWordString << endl;
    }
}

void Game::extractWord(string fileName) {
    vector<string> words;
    fstream wordsStream(fileName);
    string word = "";
    while(wordsStream >> word) {
        (words).push_back(word);
    }
    srand(time(NULL));
    int index = rand() % words.size();
    // Select the word
    string selectedWord = words[index];
    for(auto character : selectedWord) {
        pair<char, bool> newPair = make_pair(character, false);
        currentWord.push_back(newPair);
    }
}

bool Game::isFinished() {
    if(this->currentState == 7) {
        return true;
    }
    return false;
}

bool Game::isWinner() {
    for(int i = 0; i < currentWord.size(); i++) {
        if(currentWord[i].second == false) {
            return false;
        }
    }
    return true;
}

vector<int> Game::isInWord(char character) {
    vector<int> foundElement;
    for(int i = 0; i < currentWord.size(); i++) {
        //cout << currentWord[i].first << " " << currentWord[i].second << endl;
        if(currentWord[i].first == character) {
            foundElement.push_back(i);
        }
    }
    return foundElement;
}

void Game::drawWord() {
    for(auto el : currentWord) {
        if(el.second == true) {
            cout << " " << el.first << " ";
        } else {
            cout << " _ ";
        }
    }
}

void Game::draw() {
    system("clear");
    cout << "HANGMAN GAME\n";
    if(!win) {
        switch (currentState) {
            case 0:
                cout << "-----------------------\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                break;
            case 1:
                cout << "-----------------------\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|                     |\n";
                cout << "|  _________________  |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                break;
            case 2:
                cout << "-----------------------\n";
                cout << "|                     |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|  __|______________  |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                break;
            case 3:
                cout << "-----------------------\n";
                cout << "|    _________        |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|  __|______________  |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                break;
            case 4:
                cout << "-----------------------\n";
                cout << "|    _________        |\n";
                cout << "|    |       |        |\n";
                cout << "|    |       O        |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|  __|______________  |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                break;
            case 5:
                cout << "-----------------------\n";
                cout << "|    _________        |\n";
                cout << "|    |       |        |\n";
                cout << "|    |       O        |\n";
                cout << "|    |      /|\\       |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|  __|______________  |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                if(finish) {
                break;
            case 6:
                cout << "-----------------------\n";
                cout << "|    _________        |\n";
                cout << "|    |       |        |\n";
                cout << "|    |       O        |\n";
                cout << "|    |      /|\\       |\n";
                cout << "|    |       |        |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|  __|______________  |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                break;
            case 7:
                cout << "-----------------------\n";
                cout << "|    _________        |\n";
                cout << "|    |       |        |\n";
                cout << "|    |       O        |\n";
                cout << "|    |      /|\\       |\n";
                cout << "|    |       |        |\n";
                cout << "|    |      / \\       |\n";
                cout << "|    |                |\n";
                cout << "|    |                |\n";
                cout << "|  __|______________  |\n";
                cout << "-----------------------\n";
                this->drawWord();
                cout << endl;
                break;
            }
        }
    }
}

#endif
