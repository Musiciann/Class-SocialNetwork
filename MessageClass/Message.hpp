#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"

using namespace std;

class Message: private SocialNetwork {
private:

    friend class User;

    string Content;
    string SendTime;
    User* Sender;
    User* Getter;

public:

    Message(string Content, string SendTime, User* Send, User* Get);

    Message();

    string GetSendTime();

    string GetContent();

    User* GetSender();

    bool operator == (Message& CurrentMessage);
};
