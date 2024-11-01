#include <iostream>
#include <string>
#include <vector>
#include "/home/maksim/Рабочий стол/SocialNetwork/Source/SocialNetwork.hpp"

    string Name;
    string URL;

    SocialNetwork::SocialNetwork(){};

    SocialNetwork::SocialNetwork(string Name, string URL){
        this->Name = Name;
        this->URL = URL;
    }

    string SocialNetwork::GetName(){
        return Name;
    }

    string SocialNetwork::GetURL(){
        return URL;
    }

    static unsigned int UserCounter;
