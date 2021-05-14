/* Reference: https://forum.arduino.cc/t/serial-debug-toggle/632623/7 */

#define DEBUG true                                  //set to true for debug output, false for no debug ouput
#define DEBUG_SERIAL if(DEBUG)Serial

void setup() {
    Serial.begin(9600);
}

void loop() {    
    float circleArea = funcCalcCircleArea();
    DEBUG_SERIAL.println(circleArea);               // In lieu of using Serial.println(circleArea);
    delay(1000); 
}

float funcCalcCircleArea()  {
    float radius = 16.8;
    float circleArea = 3.14159 * radius * radius;
    return (circleArea);
}
