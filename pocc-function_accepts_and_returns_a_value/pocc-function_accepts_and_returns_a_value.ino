void setup() {
    Serial.begin(9600);
}

void loop() {
    float radius = 10.2;
    float circleArea = funcCalcCircleArea(radius);
    Serial.println(circleArea);
    delay(1000);    
}

float funcCalcCircleArea(float radius)  {
    float circleArea = 3.14159 * radius * radius;
    return (circleArea);
}
