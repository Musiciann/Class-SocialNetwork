#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"
#include "User.hpp"
#include "Comment.hpp"

using namespace std;

TEST(CommentTest, LikeComment){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    
    Comment NewComment("Content", &Person);

    ASSERT_EQ(NewComment.Comment::GetLikesAmount(), 0);
    NewComment.Comment::LikeComment();
    ASSERT_EQ(NewComment.Comment::GetLikesAmount(), 1);
}

TEST(CommentTest, GetCommentContent){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    User Person("Star", 20, "epicStar@gmail.com", "12.03.2000", &GoodImage);
    
    Comment NewComment("Content", &Person);

    ASSERT_EQ(NewComment.Comment::GetContent(), "Content");
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}