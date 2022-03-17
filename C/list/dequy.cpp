#include <stdio.h>
 
static int count = 0;
  
void loop() {
    count++;
    if (count <= 10) {
        printf("loop %d \n", count);
        loop();
    }
}
 
int main() {
    loop();
    return 0;    
}
