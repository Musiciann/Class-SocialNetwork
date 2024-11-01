#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"
#include "Profil.hpp"
#include "Notification.hpp"
#include "User.hpp"
#include "Post.hpp"
#include "Poll.hpp"
#include "Comment.hpp"
#include "UserPage.hpp"

using namespace std;

TEST(UserPageTest, UserPageAddPost){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);

    Comment NewComment("Content", &Person);
    Post NewPost("31.10.2024", "Star", "The Best Content Ever");

    UserPage NewPage(&Person);

    ASSERT_EQ(NewPage.UserPage::PostsAmount(), 0);
    NewPage.UserPage::AddPost(NewPost);
    ASSERT_EQ(NewPage.UserPage::PostsAmount(), 1);
}

TEST(UserPageTest, UserPageDeletePost){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);

    Comment NewComment("Content", &Person);
    Post NewPost("31.10.2024", "Star", "The Best Content Ever");

    UserPage NewPage(&Person);

    NewPage.UserPage::AddPost(NewPost);
    ASSERT_EQ(NewPage.UserPage::PostsAmount(), 1);
    NewPage.UserPage::DeletePost(NewPost);
    ASSERT_EQ(NewPage.UserPage::PostsAmount(), 0);
}

TEST(UserPageTest, UserPageAddPoll){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);

    Poll NewPoll("First", "Second");

    UserPage NewPage(&Person);

    ASSERT_EQ(NewPage.UserPage::PollsAmount(), 0);
    NewPage.UserPage::AddPoll(NewPoll);
    ASSERT_EQ(NewPage.UserPage::PollsAmount(), 1);
}

TEST(UserPageTest, UserPageDeletePoll){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Notification NewNotification("News", "Post Created", "New post was created");
    Image GoodImage(200, 400, 16, 4000);
    Profil NewProfil("Starik@gmail.com", "Stark", "24.12.2012", 22, &GoodImage);

    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);

    Poll NewPoll("First", "Second");

    UserPage NewPage(&Person);

    NewPage.UserPage::AddPoll(NewPoll);
    ASSERT_EQ(NewPage.UserPage::PollsAmount(), 1);
    NewPage.UserPage::DeletePoll(NewPoll);
    ASSERT_EQ(NewPage.UserPage::PollsAmount(), 0);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
