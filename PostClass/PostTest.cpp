#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Comment.hpp"
#include "Post.hpp"

using namespace std;

TEST(PostTest, PostCheckEqual){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    Comment NewComment("Content", &Person);

    Post FirstPost("31.10.2024", "Star", "The Best Content Ever");
    Post SecondPost("31.10.2024", "Star", "The Best Content Ever");

    ASSERT_TRUE(FirstPost == SecondPost);
}

TEST(PostTest, PostContent){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    Comment NewComment("Content", &Person);

    Post NewPost("31.10.2024", "Star", "The Best Content Ever");

    ASSERT_EQ(NewPost.Post::GetContent(), "The Best Content Ever");
}

TEST(PostTest, PostLikes){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    Comment NewComment("Content", &Person);

    Post NewPost("31.10.2024", "Star", "The Best Content Ever");
    ASSERT_EQ(NewPost.Post::LikesAmount(), 0);
    NewPost.Post::LikePost();
    ASSERT_EQ(NewPost.Post::LikesAmount(), 1);
}

TEST(PostTest, LeaveComment){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    Comment NewComment("Content", &Person);

    Post NewPost("31.10.2024", "Star", "The Best Content Ever");
    ASSERT_EQ(NewPost.Post::GetCommentsAmount(), 0);
    NewPost.Post::LeaveComment(&NewComment);
    ASSERT_EQ(NewPost.Post::GetCommentsAmount(), 1);
}

TEST(PostTest, DeleteComment){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    Comment NewComment("Content", &Person);

    Post NewPost("31.10.2024", "Star", "The Best Content Ever");
    NewPost.Post::LeaveComment(&NewComment);
    ASSERT_EQ(NewPost.Post::GetCommentsAmount(), 1);
    NewPost.Post::DeleteComment("Content");
    ASSERT_EQ(NewPost.Post::GetCommentsAmount(), 0);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
