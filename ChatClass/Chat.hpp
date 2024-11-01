#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Message.hpp"

using namespace std;

class Chat: protected Message{
private:

    User* FirstMember;
    User* SecondMember;

    friend class User;

protected:

vector<Message> ChatStory;

public:

    Chat(User* First, User* Second);

    Chat();

    void DeleteMessage(string Time);

    unsigned int MessageAmount();

    Message FindMessageSendTime(string SendTime);

    Message FindMessageContent(string Content);

    void AddMessage(Message& NewMessage);

    vector<Message>* GetChatStory();

};