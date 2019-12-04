# Hangman_Game

A simple C++ implementation of the __hangman game__

### List of words
The words taken in the game are present in the file *list_of_words-IT.txt*, if you want to remove or add a new words 
you should modified the file.
The file has the following shape:
```
  MIRCO
  COMPUTER
  AMPIO
  MADONNA
  ARMADIO
  SEDIA
  TELEVISIONE
  CAMINO
  TAVOLO
  SESSUOLOGO
  ...
```

### How to start
Once you have compiled the source file __test.cc__ with the following command:
``` 
g++ test.cc -o test 
```
you have to run the binary file:
```
./test
```

### Gameplay 
The game is quite simple, the goal is to guess the hidden word.
```
                          -----------------------
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          -----------------------
                          
                          _ _ _ _ _
                          
                          Insert a character (capital letters only): 
                          
```
If you put a letter that is in the hidden word, it will be insert in the empty space
```
                          -----------------------
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          -----------------------
                          
                          M _ _ _ _
                          
                          Insert a character (capital letters only): M 
                          
```
If you put a letter that __is not__ in the hidden word a piece of the hangman will appear, and it increase all the time
that you insert a wrong letter. Below there al the steps that you can see:
```
                          -----------------------
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |                     |
                          |  _________________  |
                          -----------------------
                          
                          -----------------------
                          |                     |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                | 
                          |  __|______________  |
                          -----------------------
                          
                          -----------------------
                          |    _________        |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |  __|______________  |
                          -----------------------
                          
                          -----------------------
                          |    _________        |
                          |    |       |        |
                          |    |       O        |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |  __|______________  |
                          -----------------------
                          
                          -----------------------
                          |    _________        |
                          |    |       |        |
                          |    |       O        |
                          |    |      /|\       |
                          |    |                |
                          |    |                |
                          |    |                |
                          |    |                |
                          |  __|______________  |
                          -----------------------
                          
                          -----------------------
                          |    _________        |
                          |    |       |        |
                          |    |       O        |
                          |    |      /|\       |      
                          |    |       |        |
                          |    |                |
                          |    |                |
                          |    |                |
                          |  __|______________  |
                          -----------------------
                          
                          -----------------------
                          |    _________        |
                          |    |       |        |
                          |    |       O        |
                          |    |      /|\       |       
                          |    |       |        |
                          |    |      / \       |    
                          |    |                |
                          |    |                |
                          |  __|______________  |
                          -----------------------
```
