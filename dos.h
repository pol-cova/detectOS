//
// Created by Paul Contreras on 26/01/23.
//

/*
 * I design an int code for detect any OS, the following list are the codes:
 * [2] -> Windows OS
 * [3] -> Linux OS
 * [4] -> MacOS
 */
#include <stdio.h>

int os_type;

#ifndef DETECTOS_DOS_H
#define DETECTOS_DOS_H

int dos()
{
#ifdef _WIN32
    os_type = 2;
    return os_type;
#elif __linux__
    os_type = 3;
    return os_type;
#elif __APPLE__
    os_type = 4;
    return os_type;
#else
    printf("Unidentified OS\n");
#endif
    return 0;
}

#endif //DETECTOS_DOS_H
