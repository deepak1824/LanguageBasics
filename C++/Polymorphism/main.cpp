//-----------------Basic Polymorphism-----------//

#if 0
#include <iostream>

using namespace std;

class Enemy{

    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
            attackPower = a;
        }
};

class Ninja: public Enemy{

    public:
        void attack(){
            cout << "NINJA ATTACK!! ------- " << attackPower << endl;
        }
};

class Monster: public Enemy{

    public:
        void attack(){
            cout << "MONSTER EAT!! @@@@@@@@ " << attackPower << endl;
        }
};


int main(){

    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->setAttackPower(100);
    e2->setAttackPower(200);

    n.attack();
    m.attack();
}

#endif


//-----------------Virtual Functions-----------//

#if 1
#include <iostream>

using namespace std;

class Enemy{
    public:
        // virtual void Attack() = 0;// Pure Virtual function
        virtual void Attack(){
        }
};

class Ninja: public Enemy{
    public:
        void Attack(){
            cout << "NINAJA ATTACK!!---------------" << endl;
        }
};

class Monster: public Enemy{
    public:
        void Attack(){
            cout << "MONSTER ATTACK!!@@@@@@@" << endl;
        }
};



int main(){

    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->Attack();
    e2->Attack();
}

#endif