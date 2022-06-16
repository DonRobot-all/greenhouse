//light_sensor-датчик света
//temperature_sensor-датчик температуры
//humidity_sensor-датчик влажности
//water_level_sensor-датчик уровня воды
//timer-таймер
//UV_lamp-УФ лампа
#define light_sensor A0
#define temperature_sensor A1
#define humidity_sensor 2
#define water_level_sensor A2
#define timer 3
#define UV_lamp 7
int whal_water = 30;//не точное значение

void setup() {
  pinMode(light_sensor, OUTPUT);
  pinMode(temperature_sensor, OUTPUT);
  pinMode(humidity_sensor, OUTPUT);
  pinMode(water_level_sensor, OUTPUT);
  pinMode(timer, OUTPUT);
  pinMode(UV_lamp, OUTPUT);
  Serial.begin(9600);
}



void loop(){
light();
delay(1000);
temperature();
waterp();
}


void light() {
  Serial.println(analogRead(A0));
}

void temperature() {
  Serial.println(analogRead(A1));
}

void waterp(){
  Serial.println(digitalRead(water_level_sensor));
  if (digitalRead(water_level_sensor) <= whal_water){
    Serial.println("Водичка подана");//включаем водичку 
    delay(5000);
    Serial.println("Водичку скомуниздили");//выключаем водичку
  }
  
  
}
