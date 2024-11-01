#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "Profil.hpp"
#include "Image.hpp"
#include "Notification.hpp"

using namespace std;

class User: public Profil {
private:

    bool OnlineStatus;

    vector<User> Friends;
    vector<Notification> Notifications;

public:

    User();

    User(string Login, unsigned int Age, string Email, string BirthDate, Image* ProfilImage);

    void AddFriend(User& Friend);

    unsigned int FriendsAmount();

    bool HaveAnyFriends();

    bool operator == (User& CurrentUser);

    User* operator = (User& CurrentUser);

    unsigned int GetNotificationAmount();

    void AddNotification(Notification NewNotification);

    void ChangePhoto(Image* NewImage);

    void SwitchOnlineStatus();

    bool CheckOnline();

};