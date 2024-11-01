#pragma once 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SocialNetwork{
private:

    string Name;
    string URL;

public:

    SocialNetwork();

    SocialNetwork(string Name, string URL);

    string GetName();

    string GetURL();

    static unsigned int UserCounter;
};