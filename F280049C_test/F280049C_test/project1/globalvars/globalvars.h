/*
 * globalvars.h
 *
 *  Created on: 2025年8月27日
 *      Author: LW
 */



#ifndef GLOBALVARS_H_
#define GLOBALVARS_H_

// --------------------------------------
// 头文件
// --------------------------------------
#include "F28x_Project.h"



// --------------------------------------
// 宏定义
// --------------------------------------

// --------------------------------------
// 自定义变量
// --------------------------------------

// α轴 β轴 分量结构体定义
typedef struct
{
    float32_t wValpha; // α轴电压分量（单位：V）
    float32_t wIalpha; // α轴电流分量（单位：A）

    float32_t wVbeta;  // β轴电压分量（单位：V）
    float32_t wIbeta;  // β轴电流分量（单位：A）

}str_alpha_betaDef;

// --------------------------------------
// 自定义数据类型
// --------------------------------------


// --------------------------------------
// 全局变量声明
// --------------------------------------

//系统状态与标志
extern int16_t   ISR_ADCA1;     // 中断标志
extern int16_t   GridConnected; // 并网状态标志 (1:并网, 0:离网)

//实时反馈信号
extern float32_t g_VbusInst;    // 直流母线电压实时采样值
extern float32_t g_VoInst;      // 输出电压实时采样值
extern float32_t g_LiInst;      // 电感电流实时采样值


//坐标变换参数
extern float32_t g_Theta ;      // 旋转角度(rad)，用于Park和反Park变换
extern float32_t g_Omega ;      // 角频率(rad/s)，ω = 2*PI*f

//用于一段代码的运行时间测量
extern float32_t time_start;    // 代码段开始时间戳
extern float32_t time_end;      // 代码段结束时间戳
extern float32_t exec_time_us;  // 代码段执行时长(微秒)

//用于一个函数的运行时间测量
extern float32_t sogi_start_time;  //SOGI函数开始时间戳
extern float32_t sogi_end_time;    // SOGI函数结束时间戳
extern float32_t sogi_time_us;     // SOGI函数执行时长(微秒)

// α轴 β轴 分量结构体声明
extern str_alpha_betaDef  str_alpha_beta;

//锁相相位差
extern float32_t phase_error;


// --------------------------------------
// 函数声明
// --------------------------------------
extern void Init_Global_Variable(void);

#endif/* VARIABLE_H_ */
