#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"
#include "Profil.hpp"
#include "Notification.hpp"
#include "User.hpp"

using namespace std;

TEST(UserTest, UserHaveAnyFriends){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);

    ASSERT_FALSE(Person.User::HaveAnyFriends());
}

TEST(UserTest, UserAddFriend){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User OtherPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    ASSERT_EQ(Person.User::FriendsAmount(), 0);

    Person.User::AddFriend(OtherPerson);
    ASSERT_EQ(Person.User::FriendsAmount(), 1);
}

TEST(UserTest, UserEqual){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User OtherPerson("Starik", 27, "ep769br@gmail.com", "12.03.2500", &GoodImage);

    ASSERT_FALSE(Person == OtherPerson);
    Person = OtherPerson;
    ASSERT_TRUE(Person == OtherPerson);
}

TEST(UserTest, UserNotifications){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);

    ASSERT_EQ(Person.User::GetNotificationAmount(), 0);
    Person.User::AddNotification(NewNotification);
    ASSERT_EQ(Person.User::GetNotificationAmount(), 1);
}

TEST(UserTest, UserOnlineStatus){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);

    ASSERT_TRUE(Person.User::CheckOnline());
    Person.User::SwitchOnlineStatus();
    ASSERT_FALSE(Person.User::CheckOnline());
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}