#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


const int NumShells = 10;   //shells per target
const int MinDist = 200;   //min distance to target
const int MaxDist = 900;   //max distance to target
const double Velocity = 200.0;   //initial velocity of shell 200ft/sec
const double Gravity = 32.2;   //Gravity for distance calculation
const double Pi = 3.1415;   //value of Pi



/*
Returns the distance a shot travels given its angle.
The following calculates how far the shot goes given
its angle of projection, velocity, and how long it stays
in the air.
*/
int DistanceCalc(double inAngle){
  double airTime;
  airTime = (2.0 * Velocity * sin(inAngle)) / Gravity;
  return (int)round((Velocity * cos(inAngle))* airTime);
}

// Get user's angle input and calculates distance where shot lands.
// Returns the distance the shot lands.
int checkShot(){
  double angle;
  int distance;

  cout << "What Angle? " << endl;
  if(!(cin >> angle))
    return -1;
  
  angle = (angle * Pi) / 180.0;
  distance = DistanceCalc(angle);
  return distance;
}

// Generate a random number for the enemy position.
int init(){
  int epos;
  srand(time(NULL));
  epos = rand() % MaxDist + MinDist;
  cout << "The enemy is " << epos << "feet away!!!!!!" << endl;
  return epos;
}

// BAAP function Plays the game

int karFire(int kitneMare){
  
  int enemy;
  int distance = 0, hit = 0;
  int shots = NumShells;

  enemy = init();

  do{
    distance = checkShot();

    if(distance == -1){
      cout << "Sirf Number Chalenge Gandu" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
      continue;
    }
    if(abs(enemy - distance) <= 1){
      hit = 1;
      kitneMare++;

      cout << "MAAR DIYA SAALE KO!!!" << endl;
      cout << "IT TOOK YOU " << NumShells - shots + 1 << "shots." << endl;
      cout << "YOU HAVE KILLED " << kitneMare << "enemies." << endl;
    }
    else{
      shots--;
      if (distance > enemy){
        cout << "Itne Se AAGE hai " << abs(enemy - distance) << endl;
      }
      else{
        cout << "Itne Se PEECHE hai" << abs(enemy - distance) << endl;
      }
    }
  } while((shots > 0) && (!(hit)));
  if(shots == 0){
    cout << "RAN OUT OF AMMO!!!!!" << endl;
  }
  return kitneMare;
}

void startUp(){
  cout << "!!!!!!!!!!!!!!!!WELCOME TO ARTILLERY GAME!!!!!!!!!!!" << endl;
  cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
  cout << "You have one cannon, which you can shoot at any angle." << endl;
  cout << "You only have 10 cannonballs for this target.." << endl;
  cout << "Let's begin..." << endl;
}


int main(){

  startUp();
  int killed = 0;
  char done;

  do{
  killed = karFire(killed);
  cout << "I see another one, care to shoot again? (Y/N) " << endl;
  cin >> done;
} while (done != 'n');
cout << "You killed " << killed << " of the enemy." << endl;
}


