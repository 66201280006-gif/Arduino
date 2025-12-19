#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// เปลี่ยน 0x27 เป็น 0x3F ถ้าจอไม่ขึ้น
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();        // เริ่มต้นจอ
  lcd.backlight();   // เปิดไฟพื้นหลัง

  lcd.setCursor(0, 0);
  lcd.print("LCD TEST");

  lcd.setCursor(0, 1);
  lcd.print("Hello World");
}

void loop() {
  // ไม่มีคำสั่ง
}
