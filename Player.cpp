#include "Player.h"

int Player::num_players = 0;
Player::Player(int age, std::string name, int* chargeForOneGame)
{
    this->age = age;
    this->name = name;
    this->chargeForOneGame = chargeForOneGame;
    num_players +=1;
    std::cout<<"Two args constructor called"<<std::endl;
}
//This becomes the delegating constructor
/*Player::Player():Player("None", 0){
    std::cout<<"No args constructor";
}*/
Player::Player(const Player& playerObj):Player{playerObj.age ,playerObj.name, playerObj.chargeForOneGame}
{

    std::cout<<"Shallow Copy constructor called and copied from source"<<playerObj.name<<std::endl;
    std::cout<<"Delegating constructor is also used here"<<std::endl;
}

Player::~Player()
{
    num_players -=1;
    std::cout<<this->name<<"\t"<<"destroyed"<<std::endl;
    delete chargeForOneGame;
}
//Let us use delegating constructors
std::string Player::getName()
{
    return name;
}

int Player::getAge()
{
    return age;
}

void Player::setAge(int age)
{
    this->age = age;
}

void Player::setName(std::string name)
{
       this->name = name;
}

void Player::setPlayerCharge(int charge)
{
    this->chargeForOneGame = new int(charge);
}

int Player::get_num_players()
{
    return num_players;
}

void Player::active_players()
{
    std::cout<<"The number of active players are"<<"\t"<<num_players;
}


