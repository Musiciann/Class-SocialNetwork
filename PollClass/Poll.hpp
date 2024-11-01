#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "SocialNetwork.hpp"

using namespace std;

class Poll: protected SocialNetwork{
private:

    string FirstChoice;
    string SecondChoice;
    unsigned int FirstOptionVotes;
    unsigned int SecondOptionVotes;

public:

    friend class User;

    Poll(string FirstChoice, string SecondChoice);

    void VoteFirst();

    void VoteSecond();

    bool operator == (Poll& OtherPoll);

    unsigned int GetVotesAmount();

    void ChangeFirstOption(string NewOption);

    string GetFirstOption();

    unsigned int GetFirstOptionVotes();

    void ChangeSecondOption(string NewOption);

    string GetSecondOption();

    unsigned int GetSecondOptionVotes();
};