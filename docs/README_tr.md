# Deneyap Ultraviyole Işık Algılayıcı Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Ultraviyole Işık Algılayıcı LTR390 için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M41** ,**mpv1.0**
- `MCU` LITE-ON LTR-390UV-01
- `Ağırlık`
- `Modul Boyutları` 25,4 mm x 25,4 mm
- `I2C Adres` 0x53

| Adres |  | 
| :---  | :---     |
| 0x53   | varsayılan adres |

## :closed_book:Dokümanlar
[Deneyap Ultraviyole Işık Algılayıcı](https://docs.deneyapkart.org/tr/content/contentDetail/deneyap-module-deneyap-uv-light-and-ambient-light-)

[Deneyap Ultraviyole Işık Algılayıcı Şematik](https://cdn.deneyapkart.org/media/upload/userFormUpload/rpg5nuYZ4nRmF6koyt8opWJk0g1mW6tX.pdf)

[Deneyap Ultraviyole Işık Algılayıcı Teknik Çizim](https://cdn.deneyapkart.org/media/upload/userFormUpload/ts4p78WD1a4OfMgkSmOPG9Jm2hrBhzXY.pdf)

[LITE-ON LTR-390UV-01_datasheet](https://optoelectronics.liteon.com/upload/download/DS86-2015-0004/LTR-390UV_Final_%20DS_V1%201.pdf)

[Arduino IDE'de Kütüphane Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Ultraviyole Işık Algılayıcı
Bu Arduino kütüphanesi Deneyap Ultraviyole Işık Algılayıcı LTR390 I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz. 

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.1 - yeni örnek(`IsikAlgilamaOkumaAyarlama`) eklendi, kütüphane fonksiyonu(`begin`) ve metin bilgileri güncellendi

1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Ultraviyole Işık Algılayıcı ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

|Ultraviyole Işık Algılayıcı| Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     |3.3V Besleme Gerilimi| 3.3V    |
| GND      |Toprak |GND      |
| SDA      |Çift Yönlü Veri Hattı| SDA pini |
| SCL      |Veri Hattı Zaman Senkronizasyon İşareti| SCL pini|
| INT      | Interrupt | |

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-ultraviyole-isik-algilayici-arduino-library/blob/master/LICENSE) dosyasını inceleyin.