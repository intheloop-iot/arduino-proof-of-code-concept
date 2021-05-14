void setup() {
    Serial.begin(9600);
}

void loop() {    
    float circleArea = funcCalcCircleArea();
    Serial.println(circleArea);
    delay(1000); 
}

float funcCalcCircleArea()  {
    float radius = 16.8;
    float circleArea = 3.14159 * radius * radius;
    return (circleArea);
}
