#include <HID.h>
#include <Keyboard.h>

// SETTINGS
int TABS = 10;
String LINK = "https://www.youtube.com/watch?v=dQw4w9WgXcQ"; 
String BROWSER = "chrome";


void setup() {
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  delay(1000); // the processor need time to register key press
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(500); // approximate time needed to process our intruction

  Keyboard.write(KEY_LEFT_GUI);
  delay(800);
  Keyboard.println(BROWSER); // 28005 ??
  delay(500);
  Keyboard.write(KEY_RETURN);
  delay(1000);
  Keyboard.println(LINK);
  delay(1000);
  Keyboard.write(KEY_RETURN);
  //delay(5000);
  //Keyboard.write('f');
  // Keyboard.end();
  TABS--; // to account for the first tab open
  for (int i = 0; i < TABS; i++) {
    Keyboard.press(KEY_LEFT_CTRL);
    delay(1000);
    Keyboard.press('t');
    Keyboard.releaseAll();
    delay(500);
    Keyboard.println(LINK);
    delay(1000);
    Keyboard.write(KEY_RETURN);
    //delay(5000);
    //Keyboard.write('f');
    // Keyboard.end();
  }
  Keyboard.end();
}

// unused, 
// would've used it but then I can not stop it
void loop() {
  // Keyboard.press(KEY_LEFT_CTRL);
  // delay(500);
  // keyboard.press('t');
  // delay(500);
  // Keyboard.releaseAll();
  // delay(500);
  // Keyboard.println("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  // delay(1000);
  // Keyboard.write(KEY_RETURN);
  // //delay(5000);
  // //Keyboard.write('f');
  // Keyboard.end();
}