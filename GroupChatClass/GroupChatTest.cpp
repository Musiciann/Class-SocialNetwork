#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Image.hpp"
#include "Message.hpp"
#include "Group.hpp"
#include "Chat.hpp"
#include "GroupChat.hpp"

using namespace std;

TEST(GroupChatTest, GroupChatName){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User FirstPerson("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    User SecondPerson("MisterX", 20, "epityjhfar@gmail.com", "17.03.2007", &GoodImage);
    Message NewMessage("Content", "23:15", &FirstPerson, &SecondPerson);

    Group NewGroup("Best group");
    Chat NewChat(&FirstPerson, &SecondPerson);

    GroupChat BestGroupChat("TheBest");

    ASSERT_EQ(BestGroupChat.GroupChat::GetGroupChatName(), "TheBest");
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
