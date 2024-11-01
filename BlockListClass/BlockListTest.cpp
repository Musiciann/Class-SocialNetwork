#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "BlockList.hpp"

using namespace std;

TEST(BlockListTest, BlockUser){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    BlockList NewBlockList;
    ASSERT_EQ(NewBlockList.BlockList::BlockedUsersAmount(), 0);
    NewBlockList.BlockList::BlockUser(&Person);
    ASSERT_EQ(NewBlockList.BlockList::BlockedUsersAmount(), 1);
}

TEST(BlockListTest, FindBlockedUser){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    BlockList NewBlockList;
    NewBlockList.BlockList::BlockUser(&Person);
    ASSERT_EQ(NewBlockList.BlockList::BlockedUsersAmount(), 1);
    ASSERT_TRUE(NewBlockList.BlockList::FindBlockedUser("Star") == Person);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
