#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"
#include "User.hpp"
#include "Poll.hpp"

using namespace std;

TEST(PollTest, PollCheckEqual){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Poll NewPoll("First", "Second");
    Poll OldPoll("First", "Second");
    ASSERT_TRUE(NewPoll == OldPoll);
}

TEST(PollTest, PollFirstVote){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Poll NewPoll("First", "Second");
    ASSERT_EQ(NewPoll.Poll::GetFirstOptionVotes(), 0);
    NewPoll.Poll::VoteFirst();
    ASSERT_EQ(NewPoll.Poll::GetFirstOptionVotes(), 1);
}

TEST(PollTest, PollSecondVote){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Poll NewPoll("First", "Second");
    ASSERT_EQ(NewPoll.Poll::GetSecondOptionVotes(), 0);
    NewPoll.Poll::VoteSecond();
    ASSERT_EQ(NewPoll.Poll::GetSecondOptionVotes(), 1);
}

TEST(PollTest, PollVotesAmount){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Poll NewPoll("First", "Second");
    ASSERT_EQ(NewPoll.Poll::GetVotesAmount(), 0);
    NewPoll.Poll::VoteSecond();
    NewPoll.Poll::VoteSecond();
    NewPoll.Poll::VoteFirst();
    ASSERT_EQ(NewPoll.Poll::GetVotesAmount(), 3);
}

TEST(PollTest, PollChangeFirstOption){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Poll NewPoll("First", "Second");
    NewPoll.Poll::ChangeFirstOption("NewFirst");
    ASSERT_EQ(NewPoll.Poll::GetFirstOption(), "NewFirst");
}

TEST(PollTest, PollChangeSecondOption){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Poll NewPoll("First", "Second");
    NewPoll.Poll::ChangeSecondOption("NewSecond");
    ASSERT_EQ(NewPoll.Poll::GetSecondOption(), "NewSecond");
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}