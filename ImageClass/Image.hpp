#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"

class Image: private SocialNetwork{
private: 

    unsigned int pxHeight;
    unsigned int pxWidth;
    unsigned int Resolution;
    unsigned int ByteSize;

public:

    Image(unsigned int pxHeight, unsigned int pxWidth, double ByteSize, unsigned int Resolution);

    Image();

    unsigned int GetByteSize();

    unsigned int GetTotalSize();
};