#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"

using namespace std;

class Notification: protected SocialNetwork{
private:

    string NotificationName;
    string NotificationType;
    string Info;

public:

    Notification(string NotificationName, string NotificationType, string Info);

    string GetNotificationFull();

};
