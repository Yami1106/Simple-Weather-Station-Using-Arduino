#include <dht11.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHT11PIN 2

dht11 DHT11;
LiquidCrystal_I2C lcd(0x27, 16, 2);
int i = 0;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  Serial.println("LCD initialized");
}

void loop() {
  char t[] = "Temp (C)";
  char h[] = "Humi (%)";
  int chk = DHT11.read(DHT11PIN);

  lcd.clear();

  // Store humidity and temperature as strings
  char hstr[6];
  char tstr[6];

  // Convert humidity and temperature to strings
  dtostrf(DHT11.humidity, 4, 1, hstr);
  dtostrf(DHT11.temperature, 4, 1, tstr);

  // Display temperature label on the first row
  for (i = 0; i < strlen(t); i++) {
    lcd.setCursor(i, 0);
    lcd.print(t[i]);
  }

  for(i=0;i<4;i++){
  lcd.setCursor(strlen(t)+i, 0);
  lcd.print(tstr[i]);
  }

  // Display humidity label on the second row
  for (i = 0; i < strlen(h); i++) {
    lcd.setCursor(i, 1);
    lcd.print(h[i]);
  }

  for(i=0;i<4;i++){
  lcd.setCursor(strlen(h)+i, 1);
  lcd.print(hstr[i]);
  }

  Serial.print("Temperature (C): ");
  Serial.println(DHT11.temperature);

  Serial.print("Humidity (%): ");
  Serial.println(DHT11.humidity);

  delay(2000);
}
