//skeych: Hellos.imo 
int const LED=13;
void setup() {
    // put your setup code here, to run once:
    pinMode(LED,OUTPUT);
    Serial.begin(9600); //Baudios
    Digital.Write(LED,LOW);
    Serial.print("Hello");

}
void loop(){

}