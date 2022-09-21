/*
 *   IsikAlgilamaOkumaAyarlama örneği,
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden okunma ayarlarını değiştirmektedir.
 *   Sensörden gelen ışık yoğunluklarını okumaktadır. Işık yoğunluğunu seri port ekranına yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Ultraviyole Işık Algılayıcı için oluşturulmuştur
 *      ------> https://docs.deneyapkart.org/tr/content/contentDetail/deneyap-module-deneyap-uv-light-and-ambient-light- <------
 *      ------> https://github.com/deneyapkart/deneyap-ultraviyole-isik-algilayici-arduino-library <------
 */
#include <Deneyap_UltraviyoleIsikAlgilici.h>      // Deneyap Ultraviyole Işık Algılayıcı kütüphanesi eklenmmesi

UVlight UVlight;                                  // UVlight için class tanımlanması

void setup() {
  Serial.begin(115200);                           // Seri haberleşme başlatılması
  UVlight.begin(0x53);                            // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
  UVlight.setMode(LTR390_MODE_ALS);               // Ortam ışığını okumaya ayarlanması.  LTR390_MODE_UVS: ultraviyole ışık verisi
  UVlight.setGain(LTR390_GAIN_3);                 // Gain(kazanç) ayarlanması. LTR390_GAIN_1, LTR390_GAIN_6, LTR390_GAIN_9, LTR390_GAIN_18
  UVlight.setResolution(LTR390_RESOLUTION_16BIT); // Resolution(çözünürlük) ayarlanması. LTR390_RESOLUTION_16BIT, LTR390_RESOLUTION_17BIT, LTR390_RESOLUTION_18BIT, LTR390_RESOLUTION_19BIT, LTR390_RESOLUTION_20BIT
}

void loop() {
  if (UVlight.newDataAvailable()) {               // Yeni veri gelirse
    if (UVlight.getMode() == LTR390_MODE_ALS) {   // Ortam ışığı verileri okunursa
      // Ortam ışık verisinin okunması ve seri port ekranına yazdırılması
      Serial.print("LUX: ");
      Serial.print(UVlight.getLUX());

      Serial.print("\tALS: ");
      Serial.println(UVlight.readALS());
    } else {                                      // Ultraviyole ışık verisi okunursa
      // Ultraviyole ışık verisinin okunması ve seri port ekranına yazdırılması
      Serial.print("UVI: ");
      Serial.print(UVlight.getUVI());

      Serial.print("\tUVS: ");
      Serial.println(UVlight.readUVS());
    }
  }
  delay(50);                                      // 50 milisaniye bekletilmesi
}
