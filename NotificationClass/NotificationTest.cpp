#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Notification.hpp"

using namespace std;

TEST(NotificationTest, NotificationFullInfo){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    ASSERT_EQ(NewNotification.Notification::GetNotificationFull(), "News Post Created New post was created");
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}