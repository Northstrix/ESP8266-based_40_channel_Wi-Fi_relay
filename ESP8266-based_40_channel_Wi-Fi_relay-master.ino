// ESP8266-based 40 channel Wi-Fi relay
// Developed by Maxim Bortnikov
// For more information and for the circuit of this device visit: https://github.com/Northstrix/ESP8266-based_40_channel_Wi-Fi_relay
#include <ESP8266WiFi.h> 
#include <Adafruit_NeoPixel.h>
const char* ssid     = "Blackberry";  // Your SSID (Network's name)
const char* password = "seasidehills99"; // Password from your network
#define LED_PIN    12 // pin D6
#define LED_COUNT 41
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
WiFiServer server(80);

void setup(){
  
  Serial.begin(115200); // Baudrate
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  Serial.print("Connecting to the Newtork"); // This all will be displayed in the Serial Monitor
  WiFi.begin(ssid, password); 
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected"); 
  server.begin(); // Starting the server
  Serial.println("Server started");
  Serial.print("IP Address of network: ");
  Serial.println(WiFi.localIP());
  Serial.println("/");
}

 

void loop(){

  WiFiClient client = server.available();
  if (!client)
  {
    return;
  }
  Serial.println("Waiting for new client");
  while(!client.available())  
  {
    delay(1);
  } 
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();
  int c1 = LOW; // Setting all variables to 0 by default
  int c2 = LOW;
  int c3 = LOW;
  int c4 = LOW;
  int c5 = LOW;
  int c6 = LOW;
  int c7 = LOW;
  int c8 = LOW;
  int c9 = LOW;
  int c10 = LOW;
  int c11 = LOW;
  int c12 = LOW;
  int c13 = LOW;
  int c14 = LOW;
  int c15 = LOW;
  int c16 = LOW;
  int c17 = LOW;
  int c18 = LOW;
  int c19 = LOW;
  int c20 = LOW;
  int c21 = LOW;
  int c22 = LOW;
  int c23 = LOW;
  int c24 = LOW;
  int c25 = LOW;
  int c26 = LOW;
  int c27 = LOW;
  int c28 = LOW;
  int c29 = LOW;
  int c30 = LOW;
  int c31 = LOW;
  int c32 = LOW;
  int c33 = LOW;
  int c34 = LOW;
  int c35 = LOW;
  int c36 = LOW;
  int c37 = LOW;
  int c38 = LOW;
  int c39 = LOW;
  int c40 = LOW;
  
  int bright = 62; // adjust the brightness of pixels here
  
     if(request.indexOf("/ch1=ON") != -1)

  {
    strip.setPixelColor(1, bright, bright, bright);
    c1 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch1=OFF") != -1)
  {
   strip.setPixelColor(1, 0, 0, 0);
    c1 = LOW;
    strip.show();
  }
    if(request.indexOf("/ch2=ON") != -1)

  {
    strip.setPixelColor(2, bright, bright, bright);
    c2 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch2=OFF") != -1)
  {
   strip.setPixelColor(2, 0, 0, 0);
    c2 = LOW;
    strip.show();
  }

      if(request.indexOf("/ch3=ON") != -1)

  {
    strip.setPixelColor(3, bright, bright, bright);
    c3 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch3=OFF") != -1)
  {
   strip.setPixelColor(3, 0, 0, 0);
    c3 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch4=ON") != -1)

  {
    strip.setPixelColor(4, bright, bright, bright);
    c4 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch4=OFF") != -1)
  {
   strip.setPixelColor(4, 0, 0, 0);
    c4 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch5=ON") != -1)

  {
    strip.setPixelColor(5, bright, bright, bright);
    c5 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch5=OFF") != -1)
  {
   strip.setPixelColor(5, 0, 0, 0);
    c5 = LOW;
    strip.show();
  }

      if(request.indexOf("/ch6=ON") != -1)

  {
    strip.setPixelColor(6, bright, bright, bright);
    c6 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch6=OFF") != -1)
  {
   strip.setPixelColor(6, 0, 0, 0);
    c6 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch7=ON") != -1)

  {
    strip.setPixelColor(7, bright, bright, bright);
    c7 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch7=OFF") != -1)
  {
   strip.setPixelColor(7, 0, 0, 0);
    c7 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch8=ON") != -1)

  {
    strip.setPixelColor(8, bright, bright, bright);
    c8 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch8=OFF") != -1)
  {
   strip.setPixelColor(8, 0, 0, 0);
    c8 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch9=ON") != -1)

  {
    strip.setPixelColor(9, bright, bright, bright);
    c9 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch9=OFF") != -1)
  {
   strip.setPixelColor(9, 0, 0, 0);
    c9 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch10=ON") != -1)

  {
    strip.setPixelColor(10, bright, bright, bright);
    c10 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch10=OFF") != -1)
  {
   strip.setPixelColor(10, 0, 0, 0);
    c10 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch11=ON") != -1)

  {
    strip.setPixelColor(11, bright, bright, bright);
    c11 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch11=OFF") != -1)
  {
   strip.setPixelColor(11, 0, 0, 0);
    c11 = LOW;
    strip.show();
  }
      if(request.indexOf("/ch12=ON") != -1)

  {
    strip.setPixelColor(12, bright, bright, bright);
    c12 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch12=OFF") != -1)
  {
   strip.setPixelColor(12, 0, 0, 0);
    c12 = LOW;
    strip.show();
  }

        if(request.indexOf("/ch13=ON") != -1)

  {
    strip.setPixelColor(13, bright, bright, bright);
    c13 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch13=OFF") != -1)
  {
   strip.setPixelColor(13, 0, 0, 0);
    c13 = LOW;
    strip.show();
  }
  
      if(request.indexOf("/ch14=ON") != -1)

  {
    strip.setPixelColor(14, bright, bright, bright);
    c14 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch14=OFF") != -1)
  {
   strip.setPixelColor(14, 0, 0, 0);
    c14 = LOW;
    strip.show();
  }

        if(request.indexOf("/ch15=ON") != -1)

  {
    strip.setPixelColor(15, bright, bright, bright);
    c15 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch15=OFF") != -1)
  {
   strip.setPixelColor(15, 0, 0, 0);
    c15 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch16=ON") != -1)

  {
    strip.setPixelColor(16, bright, bright, bright);
    c16 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch16=OFF") != -1)
  {
   strip.setPixelColor(16, 0, 0, 0);
    c16 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch17=ON") != -1)

  {
    strip.setPixelColor(17, bright, bright, bright);
    c17 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch17=OFF") != -1)
  {
   strip.setPixelColor(17, 0, 0, 0);
    c17 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch18=ON") != -1)

  {
    strip.setPixelColor(18, bright, bright, bright);
    c18 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch18=OFF") != -1)
  {
   strip.setPixelColor(18, 0, 0, 0);
    c18 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch19=ON") != -1)

  {
    strip.setPixelColor(19, bright, bright, bright);
    c19 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch19=OFF") != -1)
  {
   strip.setPixelColor(19, 0, 0, 0);
    c19 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch20=ON") != -1)

  {
    strip.setPixelColor(20, bright, bright, bright);
    c20 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch20=OFF") != -1)
  {
   strip.setPixelColor(20, 0, 0, 0);
    c20 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch21=ON") != -1)

  {
    strip.setPixelColor(21, bright, bright, bright);
    c21 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch21=OFF") != -1)
  {
   strip.setPixelColor(21, 0, 0, 0);
    c21 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch22=ON") != -1)

  {
    strip.setPixelColor(22, bright, bright, bright);
    c22 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch22=OFF") != -1)
  {
   strip.setPixelColor(22, 0, 0, 0);
    c22 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch23=ON") != -1)

  {
    strip.setPixelColor(23, bright, bright, bright);
    c23 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch23=OFF") != -1)
  {
   strip.setPixelColor(23, 0, 0, 0);
    c23 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch24=ON") != -1)

  {
    strip.setPixelColor(24, bright, bright, bright);
    c24 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch24=OFF") != -1)
  {
   strip.setPixelColor(24, 0, 0, 0);
    c24 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch25=ON") != -1)

  {
    strip.setPixelColor(25, bright, bright, bright);
    c25 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch25=OFF") != -1)
  {
   strip.setPixelColor(25, 0, 0, 0);
    c25 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch26=ON") != -1)

  {
    strip.setPixelColor(26, bright, bright, bright);
    c26 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch26=OFF") != -1)
  {
   strip.setPixelColor(26, 0, 0, 0);
    c26 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch27=ON") != -1)

  {
    strip.setPixelColor(27, bright, bright, bright);
    c27 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch27=OFF") != -1)
  {
   strip.setPixelColor(27, 0, 0, 0);
    c27 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch28=ON") != -1)

  {
    strip.setPixelColor(28, bright, bright, bright);
    c28 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch28=OFF") != -1)
  {
   strip.setPixelColor(28, 0, 0, 0);
    c28 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch29=ON") != -1)

  {
    strip.setPixelColor(29, bright, bright, bright);
    c29 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch29=OFF") != -1)
  {
   strip.setPixelColor(29, 0, 0, 0);
    c29 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch30=ON") != -1)

  {
    strip.setPixelColor(30, bright, bright, bright);
    c30 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch30=OFF") != -1)
  {
   strip.setPixelColor(30, 0, 0, 0);
    c30 = LOW;
    strip.show();
  }
          if(request.indexOf("/ch31=ON") != -1)

  {
    strip.setPixelColor(31, bright, bright, bright);
    c31 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch31=OFF") != -1)
  {
   strip.setPixelColor(31, 0, 0, 0);
    c31 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch32=ON") != -1)

  {
    strip.setPixelColor(32, bright, bright, bright);
    c32 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch32=OFF") != -1)
  {
   strip.setPixelColor(32, 0, 0, 0);
    c32 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch33=ON") != -1)

  {
    strip.setPixelColor(33, bright, bright, bright);
    c33 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch33=OFF") != -1)
  {
   strip.setPixelColor(33, 0, 0, 0);
    c33 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch34=ON") != -1)

  {
    strip.setPixelColor(34, bright, bright, bright);
    c34 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch34=OFF") != -1)
  {
   strip.setPixelColor(34, 0, 0, 0);
    c34 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch35=ON") != -1)

  {
    strip.setPixelColor(35, bright, bright, bright);
    c35 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch35=OFF") != -1)
  {
   strip.setPixelColor(35, 0, 0, 0);
    c35 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch36=ON") != -1)

  {
    strip.setPixelColor(36, bright, bright, bright);
    c36 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch36=OFF") != -1)
  {
   strip.setPixelColor(36, 0, 0, 0);
    c36 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch37=ON") != -1)

  {
    strip.setPixelColor(37, bright, bright, bright);
    c37 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch37=OFF") != -1)
  {
   strip.setPixelColor(37, 0, 0, 0);
    c37 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch38=ON") != -1)

  {
    strip.setPixelColor(38, bright, bright, bright);
    c38 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch38=OFF") != -1)
  {
   strip.setPixelColor(38, 0, 0, 0);
    c38 = LOW;
    strip.show();
  }
        if(request.indexOf("/ch39=ON") != -1)

  {
    strip.setPixelColor(39, bright, bright, bright);
    c39 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch39=OFF") != -1)
  {
   strip.setPixelColor(39, 0, 0, 0);
    c39 = LOW;
    strip.show();
  }
          if(request.indexOf("/ch40=ON") != -1)

  {
    strip.setPixelColor(40, bright, bright, bright);
    c40 = HIGH;
    strip.show();
  }
  if(request.indexOf("/ch40=OFF") != -1)
  {
   strip.setPixelColor(40, 0, 0, 0);
    c40 = LOW;
    strip.show();
  }

  
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html"); // All below is a web page code written in HTML
  client.println("");
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<meta charset=\"utf-8\">");
  client.println("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
  client.println("<title>ESP8266-based 9 channel Wi-Fi relay</title>"); // The name of the web page
  client.println("<head> ");
  client.print("<style>");
  client.print("   body{");
  client.print("   background-color: #181818;"); // Background color
  client.print("} ");
  client.print("   p {");
  client.print( "   color: white;"); // Text color
  client.print("</style>");
  client.print("</head>");
  client.print("<body>");
  client.print("<table style=""width:100%"" text-align: center;>"); // Creating a table to store all the elements
  client.print("  <tr>");
  client.print("  <th>");
  client.print("<p>ESP8266-based 40 channel Wi-Fi relay</p>");
  client.print("<p>Developed by Maxim Bortnikov</p>");
  client.print("<p>For more information visit: https://github.com/Northstrix/ESP8266-based-9-channel-Wi-Fi-relay </p>");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <tr>");
  client.print("  <tr>");  
  client.print("<th><p> Channel 1 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch1=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch1=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");
  client.print("  <tr>");
 
  client.print("  <tr>");  
  client.print("<th><p> Channel 2 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch2=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch2=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 3 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch3=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch3=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");
  
  client.print("  <tr>");  
  client.print("<th><p> Channel 4 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch4=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch4=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 5 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch5=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch5=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 6 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch6=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch6=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 7 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch7=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch7=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 8 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch8=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch8=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 9 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch9=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch9=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 10 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch10=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch10=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");
  
  client.print("  <tr>");  
  client.print("<th><p> Channel 11 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch11=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch11=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 12 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch12=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch12=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 13 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch13=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch13=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 14 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch14=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch14=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 15 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch15=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch15=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");
  
  client.print("  <tr>");  
  client.print("<th><p> Channel 16 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch16=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch16=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 17 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch17=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch17=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 18 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch18=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch18=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 19 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch19=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch19=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 20 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch20=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch20=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 21 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch21=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch21=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 22 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch22=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch22=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 23 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch23=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch23=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 24 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch24=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch24=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");
  
  client.print("  <tr>");  
  client.print("<th><p> Channel 25 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch25=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch25=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 26 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch26=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch26=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 27 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch27=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch27=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 28 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch28=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch28=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 29 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch29=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch29=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 30 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch30=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch30=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");


  client.print("  <tr>");  
  client.print("<th><p> Channel 31 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch31=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch31=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 32 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch32=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch32=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 33 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch33=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch33=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 34 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch34=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch34=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");
  
  client.print("  <tr>");  
  client.print("<th><p> Channel 35 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch35=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch35=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 36 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch36=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch36=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 37 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch37=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch37=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 38 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch38=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch38=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 39 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch39=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch39=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");

  client.print("  <tr>");  
  client.print("<th><p> Channel 40 ");
  client.print("  </th>");
  client.print("  </tr>");
  client.print("  <th>");
  client.println("<a href=\"/ch40=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/ch40=OFF\"\"><button>OFF</button></a><br />");
  client.print("  </th>");


  client.println("</table>");
  client.println("</body>");
  client.println("</html>");
  delay(1);
  Serial.println("Client disonnected");
  Serial.println("");

}
