#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "Image.hpp"

using namespace std;

TEST(ImageTest, ImageByteSize){
    SocialNetwork NewSN("Twitter", "https:/6y6g65/65h/twitter.by");
    Image GoodImage(200, 400, 16, 4000);
    ASSERT_EQ(GoodImage.Image::GetByteSize(), 16);
}


TEST(ImageTest, ImageTotalSize){
    SocialNetwork NewSN("VK", "https:/6yu9h9/io8h/Vkontaktah.by");
    Image GoodImage(200, 400, 16, 4000) ;
    EXPECT_EQ(GoodImage.Image::GetTotalSize(), 200 * 400);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RU");
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
