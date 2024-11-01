#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Message.hpp"
#include "Chat.hpp"

using namespace std;

    vector<Message> ChatStory;

    Chat::Chat(User* First, User* Second):FirstMember(First),SecondMember(Second){}

    Chat::Chat(){}

    void Chat::DeleteMessage(string Time){
        int Counter = 0;
        for(Message Mess:ChatStory){
            if(Mess.GetSendTime() == Time){
                ChatStory.erase(ChatStory.begin() + Counter);
                return;
            }
            Counter++;
        }
    }

    unsigned int Chat::MessageAmount(){
        return ChatStory.size();
    }

    Message Chat::FindMessageSendTime(string SendTime){
        for(auto Msg:ChatStory){
            if(Msg.GetSendTime() == SendTime){
                return Msg;
            }
        }
    }

    Message Chat::FindMessageContent(string Content){
        for(auto Msg:ChatStory){
            if(Msg.GetContent() == Content){
                return Msg;
            }
        }
    }

    void Chat::AddMessage(Message& NewMessage){
        ChatStory.push_back(NewMessage);
    }

    vector<Message>* Chat::GetChatStory(){
        return &ChatStory;
    }

