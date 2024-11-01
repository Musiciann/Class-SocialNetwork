#include <iostream>
#include <string>
#include <vector>
#include "/home/maksim/Рабочий стол/SocialNetwork/Source/Image.hpp"
#include "SocialNetwork.hpp"

    unsigned int pxHeight;
    unsigned int pxWidth;
    unsigned int Resolution;
    unsigned int ByteSize;

    Image::Image(unsigned int pxHeight, unsigned int pxWidth, double ByteSize, unsigned int Resolution){
        this->pxHeight = pxHeight;
        this->pxWidth = pxWidth;
        this->ByteSize = ByteSize;
        this->Resolution = Resolution;
    }

    Image::Image(){}

    unsigned int Image::GetByteSize(){
        return ByteSize;
    }

    unsigned int Image::GetTotalSize(){
        return pxHeight * pxWidth;
    }
