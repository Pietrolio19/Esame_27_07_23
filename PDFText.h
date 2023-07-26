#ifndef HTML_PDF_ABSFACTORY_PDFTEXT_H
#define HTML_PDF_ABSFACTORY_PDFTEXT_H

#include "Text.h"
#include "header.h"

class PDFText : public Text{
public:
    PDFText(string txt, string ext, int bytes) : Text(txt, ext, bytes) {}

    void printText() override{
        cout << "Testo: " << text << endl;
        cout << "Estensione:" << extension << endl;
    }
};
#endif //HTML_PDF_ABSFACTORY_PDFTEXT_H
