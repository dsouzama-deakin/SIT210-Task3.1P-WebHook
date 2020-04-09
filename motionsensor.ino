int sensor = D2;
String motion;

void setup() 
{
    pinMode(sensor,INPUT);
}

void loop() 
{
    if(digitalRead(sensor) == HIGH) 
    { motion = "1"; }
    else
    { motion = "0"; }
    
    Particle.publish("motion", motion, PRIVATE);
    delay(30000);
}