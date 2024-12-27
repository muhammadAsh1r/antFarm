#include <iostream>
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
};

int main() {
  
  return 0;
}