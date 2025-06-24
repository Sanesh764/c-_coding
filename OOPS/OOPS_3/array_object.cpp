#include <iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Player {
    class Helmet {
        int hp;
        int level;

    public:
        void setHp(int hp) {
            this->hp = hp;
        }
        void setLevel(int level) {
            this->level = level;
        }
        int getHp() {
            return hp;
        }
        int getLevel() {
            return level;
        }
    };

private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    // Getters
    int getHealth() {
        return health;
    }
    int getAge() {
        return age;
    }
    int getScore() {
        return score;
    }
    bool isAlive() {
        return alive;
    }
    Gun getGun() {
        return gun;
    }

    // Setters
    void setHealth(int health) {
        this->health = health;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setScore(int score) {
        this->score = score;
    }
    void setIsAlive(bool isAlive) {
        this->alive = isAlive;
    }
    void setGun(Gun gun) {
        this->gun = gun;
    }
    
    // Setting helmet level and HP
    void setHelmet(int level) {
        helmet.setLevel(level);
        int health = 0;
        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else {
            cout << "Error: Invalid level!" << endl;
            return;
        }
        helmet.setHp(health);
    }

    // Get helmet details
    void getHelmet() {
        cout << "Helmet HP: " << helmet.getHp() << endl;
        cout << "Helmet Level: " << helmet.getLevel() << endl;
    }
};

// Function to add scores of two players
int addScore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

// Function to get the player with maximum score
Player getMaxScorePlayer(Player a, Player b) {
    return (a.getScore() > b.getScore()) ? a : b;
}

int main() {
    Player sanesh;
    Player santosh;

    Player* shivansh = new Player;
    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    sanesh.setAge(21);
    sanesh.setScore(100);
    sanesh.setIsAlive(true);
    sanesh.setHealth(70);
    sanesh.setGun(akm);
    sanesh.setHelmet(2);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    santosh.setAge(22);
    santosh.setScore(20);
    santosh.setIsAlive(true);
    santosh.setHealth(100);
    santosh.setGun(awm);
    santosh.setHelmet(3);

    // Gun gun123 = sanesh.getGun();
    // cout << "Gun Damage: " << gun123.damage << endl;
    // cout << "Gun Ammo: " << gun123.ammo << endl;
    // cout << "Gun Scope: " << gun123.scope << endl;

    santosh.getHelmet();
    sanesh.getHelmet();
    Player players[3]={sanesh,santosh,*shivansh};
    cout<<players[0].getAge()<<endl;


    delete shivansh; // Clean up allocated memory
    return 0;
}