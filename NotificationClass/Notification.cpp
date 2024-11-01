#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Notification.hpp"

using namespace std;

    string NotificationName;
    string NotificationType;
    string Info;

    Notification::Notification(string NotificationName, string NotificationType, string Info){
        this->NotificationName = NotificationName;
        this->NotificationType = NotificationType;
        this->Info = Info;
    }

    string Notification::GetNotificationFull(){
        return NotificationName + " " + NotificationType + " " + Info;
    }