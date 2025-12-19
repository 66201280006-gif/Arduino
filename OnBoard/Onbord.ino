#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

/* DHT11 */
#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// LCD I2C
LiquidCrystal_I2C lcd(0x27, 16, 2);

// ===== Function แสดงผล LCD =====
void DispLCD(float humi, float temp) {
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("H:");
  lcd.print(humi);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("T:");
  lcd.print(temp);
  lcd.write(223);   // เครื่องหมาย °
  lcd.print("C");
}

void setup() {
  Serial.begin(9600);
  dht.begin();

  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("LAB3 DHT11 LCD");
  lcd.setCursor(0, 1);
  lcd.print("Teepakorn");
  delay(2000);
  lcd.clear();
}

void loop() {
  float Humidity = dht.readHumidity();
  float Temperature = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(Humidity);
  Serial.print(" %  ");

  Serial.print("Temperature: ");
  Serial.print(Temperature);
  Serial.println(" C");

  DispLCD(Humidity, Temperature);

  delay(2000);
}