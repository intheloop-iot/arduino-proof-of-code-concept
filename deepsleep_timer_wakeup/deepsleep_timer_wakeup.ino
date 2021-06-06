/* Deep Sleep and Wake-up Using Timer */

#define uS_TO_S_FACTOR 1000000ULL  /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP  10       /* Time ESP32 will go to sleep (in seconds) */

RTC_DATA_ATTR int bootCount = 0;

void functionWorkOnAnything() {
  Serial.println("Place all processes and arguments here before going deep sleep."); 
}

void setup(){
    Serial.begin(115200);
    delay(1000); 
  
    ++bootCount;
    Serial.println("Boot number: " + String(bootCount));
 
    esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR);
    Serial.println("Setup ESP32 to sleep for every " + String(TIME_TO_SLEEP) +
    " Seconds");

    functionWorkOnAnything();

    esp_deep_sleep_start();
}

void loop(){
  // Serial.println("Code execution will not reach here.");
  // Serial.println("There might be cases though that esp_deep_sleep_start() might strategically be placed here.);
}
