/**
 * Copyright(C), 2018-2038, KenRobot.com
 * FileName: 我的项目.ino
 * Author: 啃萝卜
 * Create: 2018/11/30
 * Modify: 2018/11/30
 */
 
void setup()
{
    Serial.begin(9600);
    pinMode(13,OUTPUT);
    pinMode(5,OUTPUT);
    digitalWrite(5,LOW);
}

void loop()
{
   int val;
    while((val=analogRead(11))<500){
        if(val>=500) break;
    }
   while(1){
       digitalWrite(13,HIGH);
        for(int i=200;i<=800;i++){                    //用循环的方式将频率从200HZ 增加到800HZ
            pinMode(4,OUTPUT);
            tone(4,i);                            //在四号端口输出频率
            delay(5);                              //该频率维持5毫秒   
        }
        delay(4000);                            //最高频率下维持4秒钟
        for(int i=800;i>=200;i--){
            pinMode(4,OUTPUT);
            tone(4,i);
            delay(10);
        }
    }
}