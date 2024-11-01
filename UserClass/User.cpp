#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Profil.hpp"
#include "Image.hpp"
#include "Notification.hpp"

using namespace std;

    bool OnlineStatus;

    vector<User> Friends;
    vector<Notification> Notifications;

    User::User(){
        this->OnlineStatus = false;
    }

    User::User(string Login, unsigned int Age, string Email, string BirthDate, Image* ProfilImage):Profil(Email, Login, BirthDate, Age, ProfilImage){
        this->OnlineStatus = true;
    }

    void User::AddFriend(User& Friend){
        Friends.push_back(Friend);
    }

    unsigned int User::FriendsAmount(){
        return Friends.size();
    }

    bool User::HaveAnyFriends(){
        if(FriendsAmount() == 0) return false;
        return true;
    }

    bool User::operator == (User& CurrentUser){
        if(this->GetLogin() == CurrentUser.GetLogin() &&
            this->GetAge() == CurrentUser.GetAge() &&
            this->GetBirthDate() == CurrentUser.GetBirthDate() &&
            this->GetEmail() == CurrentUser.GetEmail() &&
            this->GetProfilImage() == CurrentUser.GetProfilImage()) return true;
            return false;
    }

    User* User::operator = (User& CurrentUser){
        this->SetLogin(CurrentUser.GetLogin());
        this->SetAge(CurrentUser.GetAge());
        this->SetEmail(CurrentUser.GetEmail());
        this->SetBirthDate(CurrentUser.GetBirthDate());
        this->SetProfilImage(CurrentUser.GetProfilImage());
        return this;
    }

    unsigned int User::GetNotificationAmount(){
        return Notifications.size();
    }

    void User::ChangePhoto(Image* NewImage){
        this->Profil::SetProfilImage(NewImage);
    }

    void User::SwitchOnlineStatus(){
        if(OnlineStatus == true){
            OnlineStatus = false;
            return;
        }
        OnlineStatus = false;
    }

    void User::AddNotification(Notification NewNotification){
        Notifications.push_back(NewNotification);
    }

    bool User::CheckOnline(){
        return OnlineStatus;
    }