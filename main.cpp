//aiden ramsey
//random class practice using animal classes

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

#include "Animals.cpp"
#include "Animals.h"
#include "User.h"
#include "User.cpp"

const int ANIMALS_LIST_SIZE = 10; //list size for amount of ANIMALS_LIST_SIZE
const string SNAKEFILENAME = "snakes.txt"; //string for the snakes file name
const string NAMEFILENAME = "names.txt";
const string TRAITSFILENAME = "snakeTraits.txt";

//function to read a normal file
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

//function to read the traits file
void readTraitsFile(string list[], string fileName, int listSize)
{
    ifstream inputFile;
    inputFile.open(fileName);
    if(inputFile.is_open())
    {
        for (int i = 0; i < listSize; i ++)
        {
            getline(inputFile, list[i]);
        }
    }
    else
    {
        cout << "ERROR opening " << fileName << ". \n";
    }
}

// void assignSnakeToTraits(string traitsArray[], string snakesArray[], int arraySize, Animals(&snake)[ANIMALS_LIST_SIZE])
// {
//     for (int i = 0; i < arraySize; i++)
//     {
//         snake[i].setSnakeTraits(traitsArray, snakesArray);
//     }
// }

//print array
void printArray(string arrIn[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        cout << "ArrayIn[" << i << "] = " << arrIn[i] << "\n";
    }
    
}

//SETS RANDOM VALUES
//function to read in namesArray, snakeArray and set class atributes to each instance in teh animals array
void setSnakesRandom(string nameArray[], string snakeArray[], int arraySize, Animals (&snake)[SNAKES_LIST_SIZE])
{
    for (int i = 0; i < arraySize; i++)
    {
        snake[i].setRandomSnake(nameArray, snakeArray);
    }
}

//SETUPS SNAKES IN ORDER AS LISTED
void setSnakeTypes(string snakeTypes[], int arraySize, Animals (&snake)[SNAKES_LIST_SIZE])
{
    for (int i = 0; i < arraySize; i++)
    {
        snake[i].setType(snakeTypes, i);
    }
}


//function to print out 2nd question
void printSecondQ()
{
    cout << "2.) What Personality Trait would you say you allign with? \n";
    cout << "\t a.) Bold \n";
    cout << "\t b.) Skitish \n";
    cout << "\t c.) Easygoing \n";
    cout << "\t d.) Water-Lover \n";
}

//function to print 3rd question
void printThirdQ()
{
    cout << "2.) What Secondary Personality Trait would you say you allign with? \n";
    cout << "\t a.) Defensive \n";
    cout << "\t b.) Flighty (Quick to escape) \n";
    cout << "\t c.) Docile \n";
    cout << "\t d.) Confident \n";
}

int main()
{
    srand(time(NULL)); // For random variables

    string snakeTypes[SNAKES_LIST_SIZE]; //array for the different snake types
    readFile(snakeTypes, SNAKEFILENAME, SNAKES_LIST_SIZE); //sets the snakeTypes array to the differnt types in the snake.txt file

    string names[NAMES_LIST_SIZE]; //Array for the different names
    readFile(names, NAMEFILENAME, NAMES_LIST_SIZE); //reades the names.txt file and assigns each index to a line in teh name array

    Animals snake[SNAKES_LIST_SIZE]; //Animals class for the different types of snakes has NAME, TYPE, and GENDER attributes
    //setSnakesRandom(names, snakeTypes, SNAKES_LIST_SIZE, snake);

    //testing snakeTraits reading it
    string snakeTraits[PERSONALITY_MAX];
    readTraitsFile(snakeTraits, TRAITSFILENAME, SNAKES_LIST_SIZE);
    
    setSnakeTypes(snakeTypes, SNAKES_LIST_SIZE, snake);

    //Start of terminal

    // cout << "Hello there! Welcome to the jungle that is Arkansas's Native Snakes! \n";
    // cout << "Here we will find out what snake coincides with you and whatever it is you are deep inside? \n";
    // cout << "How about we start off with a few simple questtions \n";
    // cout << "------------------------------------------------------------------------------------------------------" << endl;

    // //variables for the input of user's name and personality traits
    // string userName;
    // string userTraits[5];

    // cout << "1.) What is your name? >> ";
    // cin >> userName;
    // cout << endl;
    // //MAYBE TURN INTO A FUNC
    // printSecondQ();

    // cout << ">> ";
    // cin >> userTraits[0];
    // //error checking for userInput
    // //MAYBE FUNC
    // while(!(userTraits[0] == "a" || userTraits[0] == "b" || userTraits[0] == "c" || userTraits[0] == "d"))
    // {
    //     cout << "ERROR! You did not enter 'a', 'b', 'c', or 'd'" << endl;
    //     cout << "Please try again! \n";
    //     printSecondQ();
    //     cout << ">> ";
    //     cin >> userTraits[0];
    // }

    // printThirdQ();
    // cout << " >> ";
    // cin >> userTraits[1];
    // //error checking for userInput third question
    // while(!(userTraits[1] == "a" || userTraits[1] == "b" || userTraits[1] == "c" || userTraits[1] == "d"))
    // {
    //     cout << "ERROR! You did not enter 'a', 'b', 'c', or 'd'" << endl;
    //     cout << "Please try again! \n";
    //     printThirdQ();
    //     cout << ">> ";
    //     cin >> userTraits[1];
    // }



    return 0;
    
}