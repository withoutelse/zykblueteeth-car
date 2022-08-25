const int servo = 15;
const int motorA = 26;
const int motorB = 27;
//pwm
const int freq = 50;//频率
const int resolution = 8;//分辨率
//channel
const int servo_channel = 0;//舵机
const int motorA_channel = 1;//电机A
const int motorB_channel = 2;//电机B

void setup() {
  // put your setup code here, to run once:
  //舵机
  ledcSetup(servo_channel,freq,resolution);
  ledcAttachPin(servo,servo_channel);
  //电机A
  ledcSetup(motorA_channel,freq,resolution);
  ledcAttachPin(motorA,motorA_channel);
  //电机B
  ledcSetup(motorB_channel,freq,resolution);
  ledcAttachPin(motorB,motorB_channel);
  
  ledcWrite(servo_channel,20);
  ledcWrite(motorA_channel,0);
  ledcWrite(motorB_channel,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(1){
    ledcWrite(motorA_channel,128);
    delay(3000);
    ledcWrite(servo_channel,7);
    delay(1000);
    ledcWrite(motorB_channel,128);
    delay(3000);
    ledcWrite(servo_channel,32);
    delay(3000);
    ledcWrite(motorA_channel,128);
    delay(1000);
    ledcWrite(servo_channel,7);
    delay(3000);
    ledcWrite(motorB_channel,128);
  }
  
}
