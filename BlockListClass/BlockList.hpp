#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"

using namespace std;

class BlockList: protected SocialNetwork{
private:

vector<User> BlockedUsers;

public:

    void BlockUser(User* BlockedUser);

    unsigned int BlockedUsersAmount();

    User FindBlockedUser(string UserLogin);
};