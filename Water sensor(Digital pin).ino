ДАТЧИК ПОТОПА:

int water; // присваиваем имя для значений с аналогового входа A0

void setup() 
{
  pinMode(2, OUTPUT); // пин 12 со светодиодом будет выходом (англ. «output»)
  pinMode(6, INPUT);  // к входу A0 подключим датчик (англ. «intput»)
  Serial.begin(9600);  // подключаем монитор порта
}

void loop() 
{
  water = digitalRead(6); // переменная "water" находится в интервале от 0 до 1023

    if (water > 120) { digitalWrite(2, HIGH); } // включаем светодиод
    if (water < 120) { digitalWrite(2, LOW); }  // выключаем светодиод

  Serial.println(water); // выводим значение датчика на монитор
  delay(500);           // задержка в одну секунду

}
