# Documentation
This is the documentation for how to use the simple library for detect os system.
# Initialize
1. First you need to download the "library-dos.zip"
2. Add <dos.h> to your header in your main.c app
* Example of code: ````#include "dos.h"````

# Example
* If you want to see and example of use check the document ```"exampleUse.c"```

# Code example
```` 
    int os_detected;
    os_detected = dos();

    if (os_detected == 2){
        // Windows Code here...
    } else if (os_detected == 3){
        // Linux Code here...
    } else if (os_detected == 4){
        // MacOsX be here...
    }    
````
# Development notes
* So this is the first version of the library so this don't have any optimization, but in a future I update the version. 