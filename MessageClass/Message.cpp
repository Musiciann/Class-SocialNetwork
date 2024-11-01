#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Message.hpp"

using namespace std;

    string Content;
    string SendTime;
    User* Sender;
    User* Getter;

    Message::Message(string Content, string SendTime, User* Send, User* Get):Sender(Send), Getter(Get) {
        this->Content = Content;
        this->SendTime = SendTime;
    }

    Message::Message(){
        Sender = nullptr;
        Getter = nullptr;
    }

    string Message::GetSendTime(){
        return SendTime;
    }

    string Message::GetContent(){
        return Content;
    }

    User* Message::GetSender(){
        return Sender;
    }

    bool Message::operator == (Message& CurrentMessage){
        if(this->Content == CurrentMessage.Content &&
        this->SendTime == CurrentMessage.SendTime &&
        this->Sender == CurrentMessage.Sender &&
        this->Getter == CurrentMessage.Getter) return true;
        return false;
    }

