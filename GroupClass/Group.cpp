#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Group.hpp"

using namespace std;

    string GroupName;

    vector<User> Members;

    Group::Group(){}

    Group::Group(string GroupName){
        this->GroupName = GroupName;
    }

    void Group::AddMember(User& Member){
        Members.push_back(Member);
    }

    unsigned int Group::MembersAmount(){
        return Members.size();
    }

