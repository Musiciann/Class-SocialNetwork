#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Profil.hpp"
#include "Image.hpp"

using namespace std;

    string Email;
    string Login;
    string BirthDate;
    unsigned int Age;
    Image* ProfilImage;

    Profil::Profil(){
        this->Email = "Empty";
        this->Login = "Empty";
        this->BirthDate = "Empty";
        this->Age = 0;
        this->ProfilImage = nullptr;
    }

    Profil::Profil(string Email, string Login, string BirthDate, unsigned int Age, Image* ProfilImage){
        this->Email = Email;
        this->Login = Login;
        this->BirthDate = BirthDate;
        this->Age = Age;
        this->ProfilImage = ProfilImage;
    }

    string Profil::GetEmail(){
        return Email;
    }

    string Profil::GetLogin(){
        return Login;
    }

    string Profil::GetBirthDate(){
        return BirthDate;
    }

    Image* Profil::GetProfilImage(){
        return ProfilImage;
    }

    unsigned int Profil::GetAge(){
        return Age;
    }

    void Profil::SetEmail(string Email){
        this->Email = Email;
    }

    void Profil::SetBirthDate(string BirthDate){
        this->BirthDate = BirthDate;
    }

    void Profil::SetLogin(string Login){
        this->Login = Login;
    }

    void Profil::SetAge(unsigned int Age){
        this->Age = Age;
    }

    void Profil::SetProfilImage(Image* ProfilImage){
        this->ProfilImage = ProfilImage;
    }