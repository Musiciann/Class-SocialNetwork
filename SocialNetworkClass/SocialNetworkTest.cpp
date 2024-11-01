#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"

using namespace std;

TEST(SocialNetworkTest, SocialNetworkName){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    ASSERT_EQ(NewSN.SocialNetwork::GetName(), "Twitter");
}


TEST(SocialNetworkTest, SocialNetworkURL){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    ASSERT_EQ(NewSN.SocialNetwork::GetURL(), "https:/6y6g65/65h/twitter.by");
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
