#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "Group.hpp"
#include "Chat.hpp"

using namespace std;

class GroupChat:public Chat, public Group{
private:

    string GroupChatName;

public:

    GroupChat(string GroupChatName);

    string GetGroupChatName();
};