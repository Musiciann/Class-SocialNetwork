#include <iostream>
#include <string>
#include <vector>
#include "/home/maksim/Рабочий стол/SocialNetwork/Source/SocialNetwork.hpp"
#include "/home/maksim/Рабочий стол/SocialNetwork/Source/User.hpp"
#include "/home/maksim/Рабочий стол/SocialNetwork/Source/BlockList.hpp"


using namespace std;

vector<User> BlockedUsers;

    void BlockList::BlockUser(User* BlockedUser){
        BlockedUsers.push_back(*BlockedUser);
    }

    unsigned int BlockList::BlockedUsersAmount(){
        return BlockedUsers.size();
    }

    User BlockList::FindBlockedUser(string UserLogin){
        for(auto BlockedUser: BlockedUsers){
            if(BlockedUser.GetLogin() == UserLogin){
                return BlockedUser;
            }
        }
    }
