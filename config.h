#ifndef __DOVETAIL_CONFIG_H__
#define __DOVETAIL_CONFIG_H__


// LED and other timer intervals
#define CONNECTED_BLINK_INTERVAL_SECS   2
#define IDLE_TIMEOUT_SECS               60
#define SENSOR_TICKER_MICROS            1000.0f  // Trigger Sensor every 1 milliseconds


// Bluetooth config
#define DEVICE_NAME "Dovetail000"
#define MFR_NAME    "Dovetail Monitor"
#define MODEL_NUM   "Model1"
#define SERIAL_NUM  "SN1"
#define HW_REV      "hw-rev1"
#define FW_REV      "fw-rev1"
#define SW_REV      "soft-rev1"

#define ADVERTISING_INTERVAL_MILLIS 300


// Accelerometer / Motion processor config
#define DEFAULT_MPU_HZ  (100)
#define TAP_COUNT 2
#define TAP_THRESHOLD 100

// Hardware pins on Dovetail V2 board
#define LO_MINUS    p1
#define ECG_SIGNAL  p2
#define LO_PLUS     p3
#define SDN_BAR     p5

#define LED_GREEN   p12
#define LED_RED     p16
#define LED_BLUE    p15

#define MPU6050_SDA p9
#define MPU6050_SCL p8
#define MPU6050_INT p11

#define UART_RX     p18
#define UART_TX     p20

// Bluetooth connection power optimization params
#define MIN_CONN_INTERVAL   MSEC_TO_UNITS(379, UNIT_1_25_MS)    // < Minimum connection interval (379 ms)
#define MAX_CONN_INTERVAL   MSEC_TO_UNITS(399, UNIT_1_25_MS)    // < Maximum connection interval (399 ms).
#define SLAVE_LATENCY       4                                   // < Slave latency.
#define CONN_SUP_TIMEOUT    MSEC_TO_UNITS(6000, UNIT_10_MS)     // < Connection supervisory timeout (6 seconds).
 


#endif // __DOVETAIL_CONFIG_H__
