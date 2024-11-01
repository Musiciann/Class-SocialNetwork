#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Message.hpp"
#include "Chat.hpp"

using namespace std;

TEST(ChatTest, ChatNewMessage){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);

    Chat NewChat(&FirstPerson, &SecondPerson);

    ASSERT_EQ(NewChat.Chat::MessageAmount(), 0);
    NewChat.Chat::AddMessage(NewMessage);
    ASSERT_EQ(NewChat.Chat::MessageAmount(), 1);
}

TEST(ChatTest, ChatDeleteMessage){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);

    Chat NewChat(&FirstPerson, &SecondPerson);

    NewChat.Chat::AddMessage(NewMessage);
    ASSERT_EQ(NewChat.Chat::MessageAmount(), 1);
    NewChat.Chat::DeleteMessage("23:15");
    ASSERT_EQ(NewChat.Chat::MessageAmount(), 0);
}

TEST(ChatTest, ChatFindMessageTime){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);

    Chat NewChat(&FirstPerson, &SecondPerson);

    NewChat.Chat::AddMessage(NewMessage);
    ASSERT_EQ(NewChat.Chat::MessageAmount(), 1);
    ASSERT_TRUE(NewChat.Chat::FindMessageSendTime("23:15") == NewMessage);
}

TEST(ChatTest, ChatFindMessageContent){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);

    Chat NewChat(&FirstPerson, &SecondPerson);

    NewChat.Chat::AddMessage(NewMessage);
    ASSERT_EQ(NewChat.Chat::MessageAmount(), 1);
    ASSERT_TRUE(NewChat.Chat::FindMessageContent("Content") == NewMessage);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}