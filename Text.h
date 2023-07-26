#ifndef HTML_PDF_ABSFACTORY_TEXT_H
#define HTML_PDF_ABSFACTORY_TEXT_H

#include "header.h"

class Text{
public:
    Text(string txt, string ext, int bytes) : text(txt), extension(ext), numBytes(bytes) {}
    virtual ~Text() {}

    virtual void printText() = 0;

    const string &getText() const {
        return text;
    }

    const string &getExtension() const {
        return extension;
    }

    int getNumBytes() const {
        return numBytes;
    }

protected:
    string text, extension;
    int numBytes;
};

#endif //HTML_PDF_ABSFACTORY_TEXT_H
