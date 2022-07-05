//Detective Game//
#include <iostream>
#include <ctime>

class Agent{
    int count = 1;
    public:
    bool PlayGame(int Difficulty);
    void PrintIntroduction(int Difficulty);
    int InterestLevels();
    void clearScreen()
    {
        system("cls");
        InterestLevels();
    }
};
class Levels:public Agent{
    public:
    int InterestLevels();
};
void Agent::PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nEnter the correct code to continue...\n\n";
}

bool Agent::PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Generate Code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    // Print CodeSum and CodeProduct to the terminal
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Well done agent! You have extracted a file! Keep going! ***";
        return true;
    }
    else
    {
        std::cout << "\n*** You entered the wrong code! Careful agent! Try again! ***";
        return false;
    }
}

int Agent::InterestLevels()
{
    srand(time(NULL)); // create new random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty && count<=3) // Loop game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
        if (bLevelComplete)
        {
            ++LevelDifficulty;
            count = 1;
        }
        else
        {
            count++;
        }
        if(count>3)
        {
            std::cout<<"\n*** ALARM ENABLED! Run Agent! Bad guys are here!! ***\n";
        }
        else if(LevelDifficulty > MaxDifficulty)
        {
            std::cout << "\n*** Great work Agent! You got all the files! Now get out of there! ***\n";
        }
    }
    return 0;
}
