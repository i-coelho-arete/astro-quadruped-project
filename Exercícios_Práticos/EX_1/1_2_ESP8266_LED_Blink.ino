/*
  ESP8266_LED_Blink - Piscar o LED Integrado no ESP8266

  Este sketch faz o LED azul integrado no módulo ESP-01 piscar em um padrão específico.
  O LED azul no módulo ESP-01 está conectado ao GPIO1, que também é o pino TXD.
  Nota: Não podemos usar Serial.print() ao mesmo tempo que utilizamos o LED integrado.
*/

void setup() {
  // Configura o pino do LED integrado como uma saída
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Mensagem opcional para debug, inicializa a comunicação serial (descomentar se necessário)
  // Serial.begin(115200);
  // Serial.println("Inicialização completa. O ESP8266 está pronto para piscar o LED!");
}

void loop() {
  // Liga o LED (LOW é o nível de tensão, mas o LED está ligado, pois é ativo em nível baixo)
  digitalWrite(LED_BUILTIN, LOW);
  
  // Espera por 1 segundo
  delay(1000);
  
  // Desliga o LED (HIGH é o nível de tensão, o LED está desligado)
  digitalWrite(LED_BUILTIN, HIGH);
  
  // Espera por 2 segundos para demonstrar o comportamento do LED ativo em nível baixo
  delay(2000);
}
