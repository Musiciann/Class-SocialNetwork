#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"
#include "Sticker.hpp"

using namespace std;

TEST(StickerTest, StickerContent){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    Sticker NewSticker(&GoodImage, "Some Content");
    ASSERT_EQ(NewSticker.Sticker::GetStickerContent(), "Some Content");
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
