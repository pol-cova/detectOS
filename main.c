#include <stdio.h>
#include "dos.h"

int main() {

    int os_detected;
    os_detected = dos();

    switch (os_detected) {
        case 2:
            printf("Windows");
            // windows code here
            break;
        case 3:
            printf("Linux"); 
            // linux code here
            break;
            
        case 4:
            printf("MacOsX");
            // macosx code here
            break;
            
    }

    return 0;

}
