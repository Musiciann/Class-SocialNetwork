#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Image.hpp"
#include "Group.hpp"

using namespace std;

TEST(GroupTest, GroupMembers){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    Group NewGroup("Best group");
    ASSERT_EQ(NewGroup.Group::MembersAmount(), 0);
}

TEST(GroupTest, GroupAddMember){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    Group NewGroup("Best group");
    NewGroup.Group::AddMember(Person);
    ASSERT_EQ(NewGroup.Group::MembersAmount(), 1);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
