int flameSensor;
int gas;
int counter =2;
void setup ()
{
  Serial.begin(9600);
  pinMode(4,INPUT);
}
void loop()
{

     gas = digitalRead(4);
    flameSensor = analogRead(A1);
    flameSensor = map(flameSensor, 0, 1023, 0, 100);
    if(flameSensor <= 90 && gas == LOW){
    if(counter == 0 || counter== 2) {
    Serial.println("0");
    counter = 1;
    }}
     if(flameSensor >= 90 && gas == HIGH ){
    if(counter == 0 || counter== 2) {
    Serial.println("0");
    counter = 1;
    }}
     if(flameSensor <= 90 &&  gas == HIGH){
     if(counter == 0 || counter == 1){
       Serial.println("1");
     counter = 2;
    }}
     if(flameSensor >= 90 && gas == LOW ){
     if(counter == 1 || counter ==2){
    Serial.println("2");
    counter = 0;
    }
    
     }}
