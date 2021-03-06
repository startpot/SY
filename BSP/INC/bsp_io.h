/*
*********************************************************************************************************
* @file    	bsp_io.h
* @author  	SY
* @version 	V1.0.0
* @date    	2016-10-13 19:52:57
* @IDE	 	Keil V5.18.0.0
* @Chip    	STM32F407VE
* @brief   	IO驱动头文件
*********************************************************************************************************
* @attention
*
* 
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Define to prevent recursive inclusion
*********************************************************************************************************
*/
#ifndef __BSP_IO_H
#define __BSP_IO_H

/*
*********************************************************************************************************
*                              				Exported Includes
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Exported define
*********************************************************************************************************
*/
/*
*********************************************************************************************************
*                              				输入位定义
*********************************************************************************************************
*/
#define	BSP_BTN_START						0x00000001			//油泵电机启动按钮
#define	BSP_BTN_STOP						0x00000002			//油泵电机停止按钮
#define	BSP_BTN_POWER						0x00000004			//电源按钮	
#define	BSP_BTN_EMEG						0x00000008			//急停按钮
#define	BSP_BTN_UP_SCREW					0x00000010			//丝杆上升
#define	BSP_BTN_DW_SCREW					0x00000020			//丝杆下降	
#define	BSP_BTN_UP_PLATFORM					0x00000040			//油缸或者电动缸上升	
#define	BSP_BTN_DW_PLATFORM					0x00000080			//油缸或者电动缸下降
#define	BSP_BTN_UP_LOCK						0x00000100			//手控盒上钳口加紧按钮
#define	BSP_BTN_UP_UNLOCK					0x00000200			//手控盒上钳口松开按钮
#define	BSP_BTN_DW_LOCK						0x00000400			//手控盒下钳口夹紧按钮
#define	BSP_BTN_DW_UNLOCK					0x00000800			//手控盒下钳口松开按钮	
#define	BSP_BTN_TEST_RUN					0x00001000			//试验运行
#define	BSP_BTN_TEST_STOP					0x00002000			//试验停止		
#define	BSP_BTN_UP_CROSSHEAD				0x00004000			//手控盒上升按钮，横梁上升	
#define	BSP_BTN_DW_CROSSHEAD				0x00008000			//手控盒下降按钮，横梁上升	

#define	BSP_LIMIT_UP_COMPRESS				0x00010000			//抗压通道上限位，电拉上限位,或者200吨丝杆上限位
#define	BSP_LIMIT_UP						0x00010000
#define	BSP_LIMIT_DW_COMPRESS				0x00020000			//抗压通道下限位，电拉下限位，或者200吨丝杆下限位
#define	BSP_LIMIT_DOWN						0x00020000						
#define	BSP_LIMIT_UP_BEND					0x00040000			//EDD控制器，抗折上限位
#define	BSP_LIMIT_DW_BEND 					0x00080000			//EDD控制器，抗折下限位
#define	BSP_LIMIT_UP_OIL 					0x00100000			//主油缸的上限位
#define	BSP_LIMIT_OIL 						0x00100000			
#define	BSP_LIMIT_DW_OIL 					0x00200000			//主油缸的下限位（不常用）
#define	BSP_LIMIT_UP_CROSSHEAD 				0x00400000			//横梁上限位
#define	BSP_LIMIT_DW_CROSSHEAD 				0x00800000			//横梁下限位
#define	BSP_ALARM_SERVO 					0x01000000			//伺服电机报警输入

#define	BSP_BTN_BOOTRESET					0x80000000			//控制器复位按钮输入	

/*
*********************************************************************************************************
*                              				输出位定义
*********************************************************************************************************
*/
#define	BSP_DO_MAIN_PUMP					0x00000001			//主油泵电机输出
#define	BSP_DO_QUICK_PUMP					0x00000002			//快升油泵电机输出
#define	BSP_DO_MOTOR_EN						0x00000004			//横梁升或者丝杆电机使能输出
#define	BSP_DO_MOTOR_REV					0x00000008			//横梁降或者丝杆电机反转	
#define	BSP_DO_OVERLOAD						0x00000010			//过载保护输出	
//...
#define	BSP_DO_VALVE_FWD					0x00000100			//进油电磁阀输出控制		
#define	BSP_DO_VALVE_RET					0x00000200			//阀口复位		
#define	BSP_DO_VALVE_REV					0x00000200			//回油电磁阀		
#define	BSP_DO_UP_LOCK						0x00000400			//上钳口夹紧电磁阀	
#define	BSP_DO_UP_UNLOCK					0x00000800			//上钳口松开电磁阀		
#define	BSP_DO_DW_LOCK						0x00001000			//下钳口夹紧电磁阀	
#define	BSP_DO_DW_UNLOCK					0x00002000			//下钳口松开电磁阀
#define	BSP_DO_VALVE_BEND					0x00004000			//抗折电磁阀

//...
#define	BSP_DO_SERVO_ON						0x00010000			//伺服驱动器使能输出
#define	BSP_DO_INVT_FWD						0x00020000			//变频器正转输出信号	
#define	BSP_DO_INVT_REV						0x00040000			//变频器反转输出信号	
//...
#define	BSP_DO_FAN							0x01000000			//散热风机输出
#define	BSP_DO_ALARM						0x02000000			//警告输出	
#define	BSP_DO_OVERHEAT						0x04000000			//过热保护输出
#define	BSP_DO_BEEP							0x08000000			//蜂鸣器输出
 
/*
*********************************************************************************************************
*                              				指示灯位定义
*********************************************************************************************************
*/
#define	BSP_LAMP_RUN						0x00000001			//执行机构不动作是灭，动作时亮	
#define	BSP_LAMP_ALARM						0x00000002			//在出现警告状态时，2HZ闪烁
#define	BSP_LAMP_COM						0x00000004			//启动时灭，当收到数据后亮，连续接收数据时，10HZ闪烁
#define	BSP_LAMP_LINK						0x00000008			//当和PC机连机是亮，当脱机后灭
#define	BSP_LAMP_IP							0x00000010			//当IP地址是默认的IP地址时亮，其他状态下灭	
#define	BSP_LAMP_HOLD						0x00000020			//当进入保持状态时指示灯亮，当退出时灭
#define	BSP_LAMP_FWD						0x00000040			//加载状态时指示灯亮，其他状态时灭
#define	BSP_LAMP_RET						0x00000080			//卸载状态时指示灯亮，其他状态时灭
//...
#define	BSP_LAMP_TARE						0x00000100			//当处于相对显示时指示灯亮，绝对显示时指示灯灭。
#define	BSP_LAMP_PEAK						0x00000200			//当处于峰值显示状态时指示灯亮，其他状态灭

//...
#define	BSP_LAMP_PUMP_START					0x00010000			//当油泵启动时指示灯亮，油泵停止时灭
#define	BSP_LAMP_PUMP_STOP					0x00020000			//和油泵启动指示灯状态相反
#define	BSP_LAMP_POWER 						0x00040000			//当系统供电时，电源指示灯亮

//...
#define	BSP_LAMP_BOARD_STA 					0x01000000			//控制板状态指示灯
#define	BSP_LAMP_BOARD_COM 					0x02000000			//控制板通讯指示灯，未通讯时：灭。收到数据后亮，每收到一次数据灭一次。



/*
*********************************************************************************************************
*                              				Exported types
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                              				Exported constants
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Exported macro
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Exported variables
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Exported functions
*********************************************************************************************************
*/
void bsp_InitIO( void );
uint32_t bsp_74HC165_Read( void );
void bsp_74HC595_Write( uint32_t value );

IO_OPERATE_TypeDef *GetIO_InputHandle(void);
IO_OPERATE_TypeDef *GetIO_OutputHandle(void);
IO_OPERATE_TypeDef *GetIO_LampHandle(void);

#endif
/************************ (C) COPYRIGHT STMicroelectronics **********END OF FILE*************************/
