#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"
#include "Profil.hpp"

using namespace std;

TEST(ProfilTest, ProfilLogin){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    ASSERT_EQ(NewProfil.Profil::GetLogin(), "Stark");
}

TEST(ProfilTest, ProfilEmail){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    ASSERT_EQ(NewProfil.Profil::GetEmail(), "Starik@gmail.com");
}

TEST(ProfilTest, ProfilBirthDate){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    ASSERT_EQ(NewProfil.Profil::GetBirthDate(), "24.12.2012");
}

TEST(ProfilTest, ProfilAge){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    ASSERT_EQ(NewProfil.Profil::GetAge(), 22);
}

TEST(ProfilTest, ProfilImage){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    ASSERT_EQ(NewProfil.Profil::GetProfilImage(), &GoodImage);
}

TEST(ProfilTest, ProfilSetLogin){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    NewProfil.SetLogin("SuperNova");
    ASSERT_EQ(NewProfil.Profil::GetLogin(), "SuperNova");
}

TEST(ProfilTest, ProfilSetEmail){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    NewProfil.Profil::SetEmail("Stark@gmail.com");
    ASSERT_EQ(NewProfil.Profil::GetEmail(), "Stark@gmail.com");
}

TEST(ProfilTest, ProfilSetBirthDate){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    NewProfil.Profil::SetBirthDate("09.02.2022");
    ASSERT_EQ(NewProfil.Profil::GetBirthDate(), "09.02.2022");
}

TEST(ProfilTest, ProfilSetAge){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    NewProfil.Profil::SetAge(30);
    ASSERT_EQ(NewProfil.Profil::GetAge(), 30);
}

TEST(ProfilTest, ProfilSetImage){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Image BetterImage(400, 500, 20, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);
    NewProfil.Profil::SetProfilImage(&BetterImage);
    ASSERT_EQ(NewProfil.Profil::GetProfilImage(), &BetterImage);
}



int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
