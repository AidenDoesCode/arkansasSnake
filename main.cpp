//aiden ramsey
//random class practice using animal classes

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

#include "Animals.h"

const int ANIMALS_LIST_SIZE = 2; //list size for amount of ANIMALS_LIST_SIZE
int const SNAKES_LIST_SIZE = 38; //GLOBAL VARIABLE FOR snakes.txt SIZE

//function to read a file
void readFile(string snakeList[SNAKES_LIST_SIZE], string fileName)
{
    ifstream inputFile;
    inputFile.open(fileName);
    if (inputFile.is_open())
    {
        for(int i = 0; i < SNAKES_LIST_SIZE; i++)
        {
            getline(inputFile, snakeList[i]);
        }
        inputFile.close();
    }
    else{
        cout << "Error opening " << fileName << ". \n";
    }
}

//prints array
void printArray(string arrIn[ANIMALS_LIST_SIZE][ANIMALS_LIST_SIZE][ANIMALS_LIST_SIZE], int size)
{
    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << arrIn[i][j][k] << endl;
            }   
        }
    }
}

//prints the animals class when called

int main()
{
    cout << "Hello world";
    const int ANIMALS_LIST_SIZE = 2; //list size for amount of ANIMALS_LIST_SIZE
    
    // Animals snake[ANIMALS_LIST_SIZE];
    
    string animalsList[ANIMALS_LIST_SIZE][ANIMALS_LIST_SIZE][ANIMALS_LIST_SIZE];
    
    
    // //initalizes the animals array to snake value
    // for(int i = 0; i < ANIMALS_LIST_SIZE; i++)
    // {
    //     for (int j = 0; j < ANIMALS_LIST_SIZE; j++)
    //     {
    //         for (int k = 0; k < ANIMALS_LIST_SIZE; k++)
    //         {
    //             animalsList[i][j][k] = snake[i].getName(), snake[i].getType(), snake[i].getGender();
    //         }   
    //     }
    // }
    
    // printArray(animalsList, ANIMALS_LIST_SIZE);

    return 0;
    
}