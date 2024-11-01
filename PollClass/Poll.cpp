#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Poll.hpp"

using namespace std;

    string FirstChoice;
    string SecondChoice;
    unsigned int FirstOptionVotes;
    unsigned int SecondOptionVotes;

    Poll::Poll(string FirstChoice, string SecondChoice){
        this->FirstChoice = FirstChoice;
        this->SecondChoice = SecondChoice;
        FirstOptionVotes = 0;
        SecondOptionVotes = 0;
    }

    bool Poll::operator == (Poll& OtherPoll){
        if(this->FirstChoice == OtherPoll.FirstChoice &&
        this->SecondChoice == OtherPoll.SecondChoice &&
        this->FirstOptionVotes == OtherPoll.FirstOptionVotes &&
        this->SecondOptionVotes == OtherPoll.SecondOptionVotes) return true;
        return false;
    }

    void Poll::VoteFirst(){
        FirstOptionVotes++;
    }

    void Poll::VoteSecond(){
        SecondOptionVotes++;
    }

    unsigned int Poll::GetVotesAmount(){
        return FirstOptionVotes + SecondOptionVotes;
    }

    void Poll::ChangeFirstOption(string NewOption){
        FirstChoice = NewOption;
    }

    void Poll::ChangeSecondOption(string NewOption){
        SecondChoice = NewOption;
    }

    string Poll::GetFirstOption(){
        return FirstChoice;
    };

    unsigned int Poll::GetFirstOptionVotes(){
        return FirstOptionVotes;
    };

    string Poll::GetSecondOption(){
        return SecondChoice;
    };

    unsigned int Poll::GetSecondOptionVotes(){
        return SecondOptionVotes;
    };