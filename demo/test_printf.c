#include "main.h"






int main() {
    int value = 42;
    char *str = "Hello, World!";
    
    int num_written = printf("Integer: %d\nString: %s\n", value, str);
    printf("Total characters written: %d\n", num_written);
    
    return 0;
}
