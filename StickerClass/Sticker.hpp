#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "Image.hpp"

using namespace std;

class Sticker: private Image {
private:

    Image* StickerImage;
    string Content;

public:

    Sticker(Image* FunnyImage, string Content);

    string GetStickerContent();

};