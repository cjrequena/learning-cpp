//
// Created by Carlos José Requena Jiménez on 14/10/25.
//

#ifndef LEARNING_CPP_FILES_H
#define LEARNING_CPP_FILES_H


class Files {
public:
    static void fstreamWriteOnNewFile();
    static void fstreamAppendOnExistingFile();
    static void fstreamReadOnExistingFile();
    static void ofstreamWriteOnNewFile();
    static void ofstreamAppendOnExistingFile();
    static void ifstreamReadOnExistingFile();


    Files();
    ~Files();
};


#endif //LEARNING_CPP_FILES_H