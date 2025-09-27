#include <stdio.h>


int main() {
    float kecepatan, jarak, waktu;
    
    
    scanf("%f", &jarak);

   
    scanf("%f", &waktu);
    
  
    kecepatan = jarak / waktu;
    
    printf("%.3f", kecepatan);
    return 0;
}