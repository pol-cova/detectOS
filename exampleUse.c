#include <stdio.h>
#include "dos.h"

int main() {

    int os_detected;
    os_detected = dos();

    if (os_detected == 2){
        // Windows Code here...
    } else if (os_detected == 3){
        // Linux Code here...
    } else if (os_detected == 4){
        // MacOsX be here...
    }

    return 0;

}
