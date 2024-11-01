#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Message.hpp"

using namespace std;

TEST(MessageTest, MessageSendTime){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);
    ASSERT_EQ(NewMessage.Message::GetSendTime(), "23:15");
}

TEST(MessageTest, MessageContent){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);
    ASSERT_EQ(NewMessage.Message::GetContent(), "Content");
}

TEST(MessageTest, MessageSender){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);
    ASSERT_EQ(NewMessage.Message::GetSender(), &FirstPerson);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}