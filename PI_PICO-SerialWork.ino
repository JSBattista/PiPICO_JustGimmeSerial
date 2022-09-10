

// Tools->Boards->Arduino MBED OS RP2040 Boards->Raspberry Pi Pico

#define UART_ID0 uart0
#define UART_ID1 uart1
#define BAUD_RATE 115200
#define DATA_BITS 8
#define STOP_BITS 1
#define PARITY    UART_PARITY_NONE


#define UART1_TX_PIN 0
#define UART1_RX_PIN 1
#define UART2_TX_PIN 4
#define UART2_RX_PIN 5

void setup() {
  // put your setup code here, to run once:
      Serial.begin(115200);
      uart_init(UART_ID0, BAUD_RATE);
      gpio_set_function(UART1_TX_PIN, GPIO_FUNC_UART);
      gpio_set_function(UART1_RX_PIN, GPIO_FUNC_UART);
      int __unused actual = uart_set_baudrate(UART_ID0, BAUD_RATE);  // Send out a string, with CR/LF conversions
      uart_set_hw_flow(UART_ID0, false, false);
      uart_set_format(UART_ID0, DATA_BITS, STOP_BITS, PARITY);

      
      uart_init(UART_ID1, BAUD_RATE);
      gpio_set_function(UART2_TX_PIN, GPIO_FUNC_UART);
      gpio_set_function(UART2_RX_PIN, GPIO_FUNC_UART);
      __unused actual = uart_set_baudrate(UART_ID1, BAUD_RATE);  // Send out a string, with CR/LF conversions
      uart_set_hw_flow(UART_ID1, false, false);
      uart_set_format(UART_ID1, DATA_BITS, STOP_BITS, PARITY);


      Serial.println("Hello Serial through USB UART0");
      uart_puts(UART_ID0, " Hello, UART0!\n");
      uart_puts(UART_ID1, " Hello, UART1!\n");
      
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
      Serial.println("Hello Serial through USB");
      uart_puts(UART_ID0, " Hello, UART1!\n");
      uart_puts(UART_ID1, " Hello, UART2!\n");
      
}
