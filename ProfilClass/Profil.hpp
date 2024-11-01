#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"

using namespace std;

class Profil: protected SocialNetwork {
private:

    string Email;
    string Login;
    string BirthDate;
    unsigned int Age;
    Image* ProfilImage;

public:

    Profil();

    Profil(string Email, string Login, string BirthDate, unsigned int Age, Image* ProfilImage);

    string GetEmail();

    string GetLogin();

    string GetBirthDate();

    Image* GetProfilImage();

    unsigned int GetAge();

    void SetEmail(string Email);

    void SetBirthDate(string BirthDate);

    void SetLogin(string Login);

    void SetAge(unsigned int Age);

    void SetProfilImage(Image* ProfilImage);
};