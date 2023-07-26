#ifndef HTML_PDF_ABSFACTORY_PDFDOCUMENT_H
#define HTML_PDF_ABSFACTORY_PDFDOCUMENT_H

#include "header.h"
#include "TIFFImage.h"
#include "PDFText.h"
#include "AbstractFactory.h"

class PDFDocument : public AbstractFactory{
public:
    PDFDocument(string name, int bytes) : documentName(name), numBytes(bytes){}

    Image* createImage() override{
        cout << "Creazione Immagine TIFF..." << endl;
        Image* imgTiff = new TIFFImage("TIFF", 25000, 130, 320);
        return imgTiff;
    }

    Text* createText() override{
        cout << "Creazione Testo PDF..." << endl;
        Text* pdfText = new PDFText("La grande storia del nostro paese inizia in un...", "pdf", 40000);
        return pdfText;
    }

private:
    string documentName;
    int numBytes;
};
#endif //HTML_PDF_ABSFACTORY_PDFDOCUMENT_H
