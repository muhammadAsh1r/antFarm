#include <iostream>
#include<vector>
using namespace std;

class Ant{
    int number_of_ants = 0;
    int number_of_ants_resting = 0;
    string queen;
    string pawn;
    public:
    void do_battle(){
        if(0){
            cout << "Batlle Won!";
        }
    }

    void rest() {
        cout << "Ant resting" << endl;
    }

    void consume_food(){
        cout << "Ant consuming food" << endl;
    }

    void start_construction(){
            cout << "Ant constructing" << endl;        
    }
};

class AntFarm{
    private:
        string species;
        vector <Ant> ants;
    public:
        AntFarm(string sp){
            species = sp;
        }

        void addAnt(Ant &ant){
            ants.push_back(ant);
        }

        void performTick(){
            ants->start_construction();
        }
};

class Meadow{
private:
    vector<AntFarm> farm;
public:
    Meadow(){
        AntFarm farms = new Meadow();
    }

    void addAntFarm(shared_ptr<AntFarm> farm) {
        antFarms.push_back(farm);
    }
};

int main() {
  
  return 0;
}