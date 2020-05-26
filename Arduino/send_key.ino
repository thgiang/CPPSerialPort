#include <Keyboard.h>
#define KEY_CTRL   0x80
#define KEY_RIGHT_SHIFT    0x85
#define KEY_RIGHT_ALT  0x86
#define KEY_RIGHT_GUI  0x87


#define   KEY_NUMPAD_1 225
#define   KEY_NUMPAD_2 226
#define   KEY_NUMPAD_3 227
#define   KEY_NUMPAD_4 228
#define   KEY_NUMPAD_5 229
#define   KEY_NUMPAD_6 230
#define   KEY_NUMPAD_7 231
#define   KEY_NUMPAD_8 232
#define   KEY_NUMPAD_9 233
#define KEY_SPACE_BAR   0x20

#define KEY_UP_ARROW   0xDA
#define KEY_DOWN_ARROW 0xD9
#define KEY_LEFT_ARROW 0xD8
#define KEY_RIGHT_ARROW    0xD7
#define KEY_BACKSPACE  0xB2
#define KEY_TAB        0xB3
#define KEY_RETURN 0xB0
#define KEY_ESC        0xB1
#define KEY_INSERT 0xD1
#define KEY_DELETE 0xD4
#define KEY_PAGE_UP    0xD3
#define KEY_PAGE_DOWN  0xD6
#define KEY_HOME   0xD2
#define KEY_END        0xD5
#define KEY_CAPS_LOCK  0xC1
#define KEY_F1     0xC2
#define KEY_F2     0xC3
#define KEY_F3     0xC4
#define KEY_F4     0xC5
#define KEY_F5     0xC6
#define KEY_F6     0xC7
#define KEY_F7     0xC8
#define KEY_F8     0xC9
#define KEY_F9     0xCA
#define KEY_F10        0xCB
#define KEY_F11        0xCC
#define KEY_F12        0xCD

void setup() {
    Serial.begin(9600);
}
void f1() {
    Keyboard.press(KEY_F1);
    delay(55);
   // Keyboard.release(KEY_F1);
   Keyboard.releaseAll();
}


void one(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_1);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_1);
    Keyboard.releaseAll();
}

void two(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_2);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_2);
    Keyboard.releaseAll();
}

void three(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_3);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_3);
    Keyboard.releaseAll();
}

void four(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_4);
    delay(SleepTime);
   // Keyboard.release(KEY_NUMPAD_4);
   Keyboard.releaseAll();
}

void five(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_5);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_5);
    Keyboard.releaseAll();
}
void six(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_6);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_6);
    Keyboard.releaseAll();
}


void seven(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_7);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_7);
    Keyboard.releaseAll();
}


void eight(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_8);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_8);
    Keyboard.releaseAll();
}

void nine(int SleepTime) {
    Keyboard.press(KEY_NUMPAD_9);
    delay(SleepTime);
    //Keyboard.release(KEY_NUMPAD_9);
    Keyboard.releaseAll();
}

void space() {
    Keyboard.press(KEY_CTRL);
    delay(50);
    Keyboard.releaseAll();
}

void loop()
{
    if (Serial.available() > 0) {
        String str = Serial.readStringUntil('\n');
        int SleepTime = 55;
        int SleepTimex2 = 100;
        
        if (str == "1") {
            one(SleepTime);
        }
        else if (str == "2") {
            two(SleepTime);
        }
        else if (str == "3") {
            three(SleepTime);
        }
        else if (str == "4") {
            four(SleepTime);
        }
        else if (str == "6") {
            six(SleepTime);
        } else if (str == "5") {
            five(SleepTime);
        }
        else if (str == "7") {
            seven(SleepTime);
        }
        else if (str == "8") {
            eight(SleepTime);
        }
        else if (str == "9") {
            nine(SleepTime);
        } 
        else if (str == "12") {
            one(SleepTimex2);
        }
        else if (str == "22") {
            two(SleepTimex2);
        }
        else if (str == "32") {
            three(SleepTimex2);
        }
        else if (str == "42") {
            four(SleepTimex2);
        }
        else if (str == "62") {
            six(SleepTimex2);
        } else if (str == "52") {
            five(SleepTimex2);
        }
        else if (str == "72") {
            seven(SleepTimex2);
        }
        else if (str == "82") {
            eight(SleepTimex2);
        }
        else if (str == "92") {
            nine(SleepTimex2);
        }
        else if (str == "s") {
            space();
        }
        else if (str == "f") { // F1
          f1();
        }
        
        Serial.println(str);
    }
}
