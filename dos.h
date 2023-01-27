//
// Created by Paul Contreras on 26/01/23.
//

/*
 * I design an int code for detect any OS, the following list are the codes:
 * [2] -> Windows OS
 * [3] -> Linux OS
 * [4] -> Unix based OS
 * [5] -> MacOS
 */
#include <stdio.h>

int os_type;

#ifndef DETECTOS_DOS_H
#define DETECTOS_DOS_H

int dos()
{
#ifdef _WIN32
    printf("Windows\n");
    return 2;
#elif __linux__
    printf("Linux\n");
    return 3;
#elif __unix__
    printf("Other unix OS\n");
    return 4;
#elif __APPLE__
    os_type = 5;
    return os_type;
#else
    printf("Unidentified OS\n");
#endif
    return 0;
}

#endif //DETECTOS_DOS_H
