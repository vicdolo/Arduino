#include<WiFi.h>

const char ssid[]="iPhone"; //修改為你家的WiFi網路名稱
const char pwd[]="22227777"; //修改為你家的WiFi密碼

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_STA); 
  WiFi.begin(ssid,pwd); 

  Serial.print("WiFi connecting");

  
  while(WiFi.status()!=WL_CONNECTED){
    Serial.print(".");
    delay(500);   
  }

  Serial.println("");
  Serial.print("IP位址:");
  Serial.println(WiFi.localIP()); 
  Serial.print("WiFi RSSI:");
  Serial.println(WiFi.RSSI()); 
  

}

void loop() {
}
