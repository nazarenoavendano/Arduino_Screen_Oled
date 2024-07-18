#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // Inicializa la pantalla
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.display();
  delay(2000); // Pausa para que la pantalla se inicialice

  // Limpia el buffer
  display.clearDisplay();

  // Configuración del texto
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  // Mostrar texto en cada línea
  display.setCursor(0, 0);
  display.println(F("Linea 1: Hola"));

  display.setCursor(0, 10);
  display.println(F("Linea 2: Naza =)"));

  display.setCursor(0, 20);
  display.println(F("Linea 3: Screen OLED"));

  display.setCursor(0, 30);
  display.println(F("Linea 4: Linea 4"));

  display.setCursor(0, 40);
  display.println(F("Linea 5: Linea 5"));

  display.setCursor(0, 50);
  display.println(F("Linea 6: Linea 6"));

  display.display();
}

void loop() {
  // No hace nada en el loop
}
