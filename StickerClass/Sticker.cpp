#include <iostream>
#include <string>
#include <vector>
#include "Image.hpp"
#include "Sticker.hpp"

using namespace std;

    Image* StickerImage;
    string Content;

    Sticker::Sticker(Image* FunnyImage, string Content){
        StickerImage = FunnyImage;
        this->Content = Content;
    }

    string Sticker::GetStickerContent(){
        return Content;
    }

    
