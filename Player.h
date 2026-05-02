#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
class Player
{
    int age;
    std::string name;
    int* chargeForOneGame;
    static int num_players;
public:
    //Player();
    //Lets use constructor for both the cases default and parameterized
    Player(int age = 0, std::string name = "None", int* chargeForOneGame = nullptr);

    Player(const Player&);

    //If we uncomment the default constructor, ambiguity is caused.Hence throwing compiler error.

    ~Player();

    void setName(std::string);

    std::string getName();

    void setAge(int);

    int getAge();

    int getchargeForOneGameValue()
    {
        return *chargeForOneGame;
    }
    void setPlayerCharge(int);

    static int get_num_players();

    static void active_players();



};

#endif // PLAYER_H
