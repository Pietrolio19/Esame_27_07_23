#ifndef HTML_PDF_ABSFACTORY_ABSTRACTFACTORY_H
#define HTML_PDF_ABSFACTORY_ABSTRACTFACTORY_H

#include "header.h"
#include "Image.h"
#include "Text.h"

class AbstractFactory{
public:
    virtual Image* createImage() = 0;
    virtual Text* createText() = 0;
};
#endif //HTML_PDF_ABSFACTORY_ABSTRACTFACTORY_H
