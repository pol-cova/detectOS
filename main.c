#include <stdio.h>
#include "dos.h"

int main() {

    int os_detected;
    os_detected = dos();

    switch (os_detected) {
        case 2:
            printf("Windows");
        case 3:
            printf("Linux");
        case 4:
            printf("UNIX BASED");
        case 5:
            printf("MacOsX");
    }

    return 0;

}
