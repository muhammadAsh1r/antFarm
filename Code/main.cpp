#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Ant
{
    int number_of_ants = 0;
    int number_of_ants_resting = 0;
    string queen;
    string pawn;

public:
    void do_battle()
    {
        if (0)
        {
            cout << "Batlle Won!";
        }
    }

    void rest()
    {
        cout << "Ant resting" << endl;
    }

    void consume_food()
    {
        cout << "Ant consuming food" << endl;
    }

    void start_construction()
    {
        cout << "Ant constructing" << endl;
    }
};

class AntFarm
{
private:
    string species;
    vector<Ant> ants;

public:
    AntFarm(string sp)
    {
        species = sp;
    }

    void addAnt(Ant &ant)
    {
        ants.push_back(ant);
    }

    void performTick()
    {
        // ants->start_construction();
    }
};

class Meadow
{
private:
    static Meadow *temp;
    vector<AntFarm> farm;

public:
    Meadow()
    {
        // AntFarm farms = new Meadow();
    }

    void addAntFarm(AntFarm farm)
    {
        // antFarms.push_back(farm);
    }
};

int main()
{
    string command;
    cout << "Ant Farm Simulation started.\n";
    cout << "Available commands:\n";
    cout << "1. spawn X Y Species - Create a new colony.\n";
    cout << "2. tick [T] - Simulate T ticks.\n";
    cout << "3. give I R A - Allocate resources or ants to a colony.\n";
    cout << "4. summary I - Show colony summary.\n";
    cout << "5. exit - End the simulation.\n";

    while (true)
    {
        cout << "Enter command: ";
        getline(cin, command);

        if (command == "exit")
        {
            cout << "Exiting the simulation...\n";
            break;
        }
        else if (command.rfind("spawn", 0) == 0)
        {
            cout << "Spawning an ant farm...\n";
        }
        else if (command.rfind("tick", 0) == 0)
        {
            cout << "Simulating ticks...\n";
        }
        else if (command.rfind("summary", 0) == 0)
        {
            cout << "Showing summary...\n";
        }
        else if (command.rfind("give", 0) == 0)
        {
            cout << "Giving resources or ants...\n";
        }
        else
        {
            cout << "Unknown command.\n";
        }
    }

    return 0;
    return 0;
}