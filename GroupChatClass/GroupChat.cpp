#include <iostream>
#include <string>
#include <vector>
#include "Group.hpp"
#include "Chat.hpp"
#include "GroupChat.hpp"

using namespace std;

    string GroupChatName;

    GroupChat::GroupChat(string GroupChatName){
        this->GroupChatName = GroupChatName;
    }

    string GroupChat::GetGroupChatName(){
        return GroupChatName;
    }
