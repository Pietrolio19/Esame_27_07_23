#ifndef HTML_PDF_ABSFACTORY_IMAGE_H
#define HTML_PDF_ABSFACTORY_IMAGE_H

#include "header.h"

class Image{
public:
    Image(string ext, int bytes, int w, int h) : extension(ext), numBytes(bytes), width(w), height(h) {
        buffer = new char[width*height];
    }
    virtual ~Image() {
        delete[] buffer;
    }

    virtual void display() = 0;

    const string &getExtension() const {
        return extension;
    }

    int getNumBytes() const {
        return numBytes;
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

protected:
    string extension;
    int numBytes, width, height;
    char* buffer;
};
#endif //HTML_PDF_ABSFACTORY_IMAGE_H
