/*
 * interface.h
 *
 *  Created on: Aug 20, 2024
 *      Author: Maryam
 */

#ifndef SERVICE_INTERFACE_H_
#define SERVICE_INTERFACE_H_

#define SER_pin_0  0
#define SER_pin_1  1
#define SER_pin_2  2
#define SER_pin_3  3
#define SER_pin_4  4
#define SER_pin_5  5
#define SER_pin_6  6
#define SER_pin_7  7


#define SER_PPORTA  0
#define SER_PPORTB  1
#define SER_PPORTC  2
#define SER_PPORTD  3


#define OUTPUT      1
#define INPUT       0

#define HIGH       1
#define LOW        0

#define OUTPUT_PORT          0xff
#define INPUT_PORT           0x00


#define HIGH_PORT          0xff
#define LOW_PORT           0x00

#define MOTOR_CW_PIN     SER_pin_0
#define MOTOR_CCW_PIN    SER_pin_1
#define EN1_PIN          SER_pin_4
#define MOTOR_CW_PIN2    SER_pin_2
#define MOTOR_CCW_PIN2   SER_pin_3
#define EN2_PIN          SER_pin_5
#define TOGGLE_PIN       SER_pin_4
#define TOGGLE_PIN2      SER_pin_5
#define BUZZER_PIN       SER_pin_6
#define DOOR_MOTOR_PIN1  SER_pin_6
#define DOOR_MOTOR_PIN2  SER_pin_7



void initialize_hardware(struct lcd_config *LCD2) ;

void stop_train() ;
void start_train();
void open_door();
void close_door();
void handle_emergency(struct lcd_config *LCD2);
void handle_door_operations() ;
void get_detect2(u8 *U8DETECT2);
void get_detect(u8 *U8DETECT);
void receive_emergency(u8 *U8DATA_RECEIVED);



#endif /* SERVICE_INTERFACE_H_ */
