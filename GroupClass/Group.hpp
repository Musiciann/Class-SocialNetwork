#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"

using namespace std;

class Group: protected User {
private:

    string GroupName;

protected:

    vector<User> Members;

public:

    Group();

    Group(string GroupName);

    void AddMember(User& Member);

    unsigned int MembersAmount();
};