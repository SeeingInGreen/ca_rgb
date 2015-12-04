#include <ca_rgb.h>

ca_rgb one;

void setup() {
  int pins[3] = {2, 3, 4};
  one.initialize_ca(pins);
}

void loop() {
  for(int i = 0; i<256; i++){
    one.set_ca(i, 0, 0);
    delay(5);
  }
  for(int k = 0; k<256; k++){
    one.set_ca(255, k, 0);
    delay(5);
  }
  for(int l = 0; l<256; l++){
    one.set_ca(255, 255, l);
    delay(5);
  }
  for(int j = 255; j>0; j-=1){
    one.set_ca(j, 255, 255);
    delay(5);
  }
  for(int m = 255; m>0; m-=1){
    one.set_ca(0, m, 255);
    delay(5);
  }
  for(int n = 255; n>0; n-=1){
    one.set_ca(0, 0, n);
    delay(5);
  }
}
