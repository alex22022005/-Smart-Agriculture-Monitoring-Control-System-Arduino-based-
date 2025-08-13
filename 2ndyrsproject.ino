#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT.h>
#include <Servo.h>

// Constants for DHT11
#define DHTPIN A2
#define DHTTYPE DHT11

// Initialize the LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // 0x27 is the I2C address for the LCD

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Initialize Servo
Servo myServo;

// Constants for pins
const int soilMoisturePin = A3; // Analog pin for soil moisture sensor
const int motorPin = 8;         // PWM pin for motor speed control

void setup() {

  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  dht.begin();
  myServo.attach(9); // Servo motor connected to pin 9
  pinMode(motorPin, OUTPUT);
  pinMode(soilMoisturePin, INPUT);
  pinMode(DHTPIN, INPUT);
  myServo.write(0); // Set servo to initial position
}

void loop() {
  // Read temperature and humidity from DHT11
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Read soil moisture level
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Control DC motor (Example: Run motor if soil is dry)
  if (temperature >= 35) 
  {
    myServo.write(90);// Motor at full speed
  } else
  {
    myServo.write(0);// Stop motor
  }
  if (soilMoistureValue > 0) {
    analogWrite(8, 255); // Motor at full speed
  } else {
    analogWrite(8, 0);   // Stop motor
  }
  // Display data on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(humidity);
  lcd.print("%");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Moist :");
  lcd.setCursor(9, 0);
  lcd.print(soilMoistureValue);
  delay(1000);
  lcd.clear();
  // Output data to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C, ");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%, ");
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);

}
