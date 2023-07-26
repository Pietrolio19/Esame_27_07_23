cmake_minimum_required(VERSION 3.23)
project(HTML_PDF_AbsFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(HTML_PDF_AbsFactory main.cpp Text.h Image.h header.h PDFText.h TIFFImage.h HTMLText.h AbstractFactory.h PDFDocument.h JPEGImage.h HTMLDocument.h)
