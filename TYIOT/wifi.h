/**********************************Copyright (c)**********************************
**                       鐗堟潈鎵�鏈� (C), 2015-2020, 娑傞甫绉戞妧
**
**                             http://www.tuya.com
**
*********************************************************************************/
/**
 * @file    wifi.h
 * @author  娑傞甫缁煎悎鍗忚寮�鍙戠粍
 * @version v2.5.6
 * @date    2020.12.16
 * @brief   鐢ㄦ埛鏃犻渶鍏冲績璇ユ枃浠跺疄鐜板唴瀹�
 */

/****************************** 鍏嶈矗澹版槑 锛侊紒锛� *******************************
鐢变簬MCU绫诲瀷鍜岀紪璇戠幆澧冨绉嶅鏍凤紝鎵�浠ユ浠ｇ爜浠呬緵鍙傝�冿紝鐢ㄦ埛璇疯嚜琛屾妸鎺ф渶缁堜唬鐮佽川閲忥紝
娑傞甫涓嶅MCU鍔熻兘缁撴灉璐熻矗銆�
******************************************************************************/

#ifndef __WIFI_H_
#define __WIFI_H_

//#include "stm32f1xx.h"
#include "stdio.h"
#include "string.h"
#include "protocol.h"
#include "system.h"
#include "mcu_api.h"


//=============================================================================
//瀹氫箟甯搁噺
//濡傛灉缂栬瘧鍙戠敓閿欒: #40: expected an identifier  DISABLE = 0, 绫讳技杩欐牱鐨勯敊璇彁绀猴紝鍙互鍖呭惈澶存枃浠� #include "stm32f1xx.h" 鏉ヨВ鍐�
//=============================================================================
#ifndef TRUE
#define      TRUE                1
#endif

#ifndef FALSE
#define         FALSE            0
#endif

#ifndef NULL
#define         NULL             ((void *) 0)
#endif



#ifndef INVALID
#define         INVALID          0xFF
#endif

//=============================================================================
//dp鏁版嵁鐐圭被鍨�
//=============================================================================
#define         DP_TYPE_RAW                     0x00        //RAW 绫诲瀷
#define         DP_TYPE_BOOL                    0x01        //bool 绫诲瀷
#define         DP_TYPE_VALUE                   0x02        //value 绫诲瀷
#define         DP_TYPE_STRING                  0x03        //string 绫诲瀷
#define         DP_TYPE_ENUM                    0x04        //enum 绫诲瀷
#define         DP_TYPE_BITMAP                  0x05        //fault 绫诲瀷

//=============================================================================
//WIFI宸ヤ綔鐘舵��
//=============================================================================
#define         SMART_CONFIG_STATE              0x00
#define         AP_STATE                        0x01
#define         WIFI_NOT_CONNECTED              0x02
#define         WIFI_CONNECTED                  0x03
#define         WIFI_CONN_CLOUD                 0x04
#define         WIFI_LOW_POWER                  0x05
#define         SMART_AND_AP_STATE              0x06
#define         WIFI_SATE_UNKNOW                0xff
//=============================================================================
//wifi閰嶇綉鐨勬柟寮�
//=============================================================================
#define         SMART_CONFIG                    0x0  
#define         AP_CONFIG                       0x1   

//=============================================================================
//wifi澶嶄綅鐘舵��
//=============================================================================
#define         RESET_WIFI_ERROR                0
#define         RESET_WIFI_SUCCESS              1

//=============================================================================
//wifi閰嶇疆澶嶄綅鐘舵��
//=============================================================================
#define         SET_WIFICONFIG_ERROR            0
#define         SET_WIFICONFIG_SUCCESS          1

//=============================================================================
//MCU鍥轰欢鍗囩骇鐘舵��
//=============================================================================
#define         FIRM_STATE_UN_SUPPORT           0x00                            //涓嶆敮鎸� MCU 鍗囩骇
#define         FIRM_STATE_WIFI_UN_READY        0x01                            //妯″潡鏈氨缁�
#define         FIRM_STATE_GET_ERROR            0x02                            //浜戠鍗囩骇淇℃伅鏌ヨ澶辫触
#define         FIRM_STATE_NO                   0x03                            //鏃犻渶鍗囩骇锛堜簯绔棤鏇存柊鐗堟湰锛�
#define         FIRM_STATE_START                0x04                            //闇�鍗囩骇锛岀瓑寰呮ā鍧楀彂璧峰崌绾ф搷浣�

//=============================================================================
//WIFI鍜宮cu鐨勫伐浣滄柟寮� 
//=============================================================================
#define         UNION_WORK                      0x0                             //mcu妯″潡涓巜ifi閰嶅悎澶勭悊
#define         WIFI_ALONE                      0x1                             //wifi妯″潡鑷鐞�

//=============================================================================
//绯荤粺宸ヤ綔妯″紡
//=============================================================================
#define         NORMAL_MODE                     0x00                            //姝ｅ父宸ヤ綔鐘舵��
#define         FACTORY_MODE                    0x01                            //宸ュ巶妯″紡	
#define         UPDATE_MODE                     0x02                            //鍗囩骇妯″紡	 

//=============================================================================
//閰嶇綉鏂瑰紡閫夋嫨
//=============================================================================
#define         CONFIG_MODE_DEFAULT             "0"                             //榛樿閰嶇綉鏂瑰紡
#define         CONFIG_MODE_LOWPOWER            "1"                             //浣庡姛鑰楅厤缃戞柟寮�
#define         CONFIG_MODE_SPECIAL             "2"                             //鐗规畩閰嶇綉鏂瑰紡  




//=============================================================================
//涓嬪彂鍛戒护
//=============================================================================
typedef struct {
  unsigned char dp_id;                              //dp搴忓彿
  unsigned char dp_type;                            //dp绫诲瀷
} DOWNLOAD_CMD_S;

#endif