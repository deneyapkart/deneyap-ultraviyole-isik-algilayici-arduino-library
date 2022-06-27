/*
 *   Işık Algılama örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen Işık Yoğunluğu okumaktadır. Işık Yoğunluğunu seri terminale yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Ultraviyole Işık Algılayıcı için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-ultraviyole-isik-algilayici-arduino-library <------
 *
*/
#include <Deneyap_UltraviyoleIsikAlgilici.h>

UVlight LTR;

float UltraviyoleIsikYogunlugu;
float OrtamIsikYogunlugu;

void setup() {
    Serial.begin(115200);
    LTR.begin(0x53);
}

void loop() {
    UltraviyoleIsikYogunlugu = LTR.getLUX();
    Serial.print("ULTRaviyole Işık Yoğunluğu: ");
    Serial.print(UltraviyoleIsikYogunlugu);

    OrtamIsikYogunlugu = LTR.readALS();
    Serial.print("\tOrtam Işık Yuğunluğu: ");
    Serial.println(OrtamIsikYogunlugu);
    
    delay(50);
}
