//aiden ramsey
//random class practice using animal classes

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

#include "Animals.cpp"
#include "Animals.h"

const int ANIMALS_LIST_SIZE = 10; //list size for amount of ANIMALS_LIST_SIZE
const string SNAKEFILENAME = "snakes.txt"; //string for the snakes file name
const string NAMEFILENAME = "names.txt";

//function to read a file
void readFile(string list[], string fileName, int listSize)
{
    ifstream inputFile;
    inputFile.open(fileName);
    if (inputFile.is_open())
    {
        for(int i = 0; i < listSize; i++)
        {
            getline(inputFile, list[i]);
        }
        inputFile.close();
    }
    else{
        cout << "Error opening " << fileName << ". \n";
    }
}

//print array
void printArray(string arrIn[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        cout << "ArrayIn[" << i << "] = " << arrIn[i] << ". \t";
    }
    cout << endl;
}

void setSnakesRandom(string nameArray[], string snakeArray[], int arraySize, Animals (&snake)[ANIMALS_LIST_SIZE])
{
    for (int i = 0; i < ANIMALS_LIST_SIZE; i++)
    {
        snake[i].setRandomSnake(nameArray, snakeArray);
        snake[i].print();
    }
}

int main()
{
    srand(time(NULL)); // For random variables

    string snakeTypes[SNAKES_LIST_SIZE]; //array for the different snake types
    readFile(snakeTypes, SNAKEFILENAME, SNAKES_LIST_SIZE); //sets the snakeTypes array to the differnt types in the snake.txt file

    string names[NAMES_LIST_SIZE];
    readFile(names, NAMEFILENAME, NAMES_LIST_SIZE);


    Animals snake[ANIMALS_LIST_SIZE];
    setSnakesRandom(names, snakeTypes, SNAKES_LIST_SIZE, snake);

    return 0;
    
}