#ifndef HTML_PDF_ABSFACTORY_HTMLDOCUMENT_H
#define HTML_PDF_ABSFACTORY_HTMLDOCUMENT_H

#include "header.h"
#include "AbstractFactory.h"
#include "HTMLText.h"
#include "JPEGImage.h"

class HTMLDocument : public AbstractFactory{
public:
    HTMLDocument(string name, int bytes) : documentName(name), numBytes(bytes) {}

    Image* createImage() override{
        cout << "Creazione immagine JPEG..." << endl;
        Image* jpegImg = new JPEGImage("JPEG", 28000, 400, 870);
        return jpegImg;
    }

    Text* createText() override{
        cout << "Creazione testo HTML..." << endl;
        Text* htmlText = new HTMLText("<html> <head> ... </head> ... </html>", "HTML", 200);
        return htmlText;
    }

private:
    string documentName;
    int numBytes;
};
#endif //HTML_PDF_ABSFACTORY_HTMLDOCUMENT_H
