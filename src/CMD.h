
// Hardware version 硬件版本
const uint8_t HARDWARE_VERSION_CMD[] = {0xBB, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x7E};
// Single polling instruction 单次轮询指令
const uint8_t POLLING_ONCE_CMD[] = {0xBB, 0x00, 0x22, 0x00, 0x00, 0x22, 0x7E};
// Multiple polling instructions 多次轮询指令
const uint8_t POLLING_MULTIPLE_CMD[] = {0xBB, 0x00, 0x27, 0x00, 0x03, 0x22, 0x27, 0x10, 0x83, 0x7E};
// Set the SELECT mode 设置Select模式
const uint8_t SET_SELECT_MODE_CMD[] = {0xBB, 0x00, 0x12, 0x00, 0x01, 0x01, 0x14, 0x7E};
// Set the SELECT parameter instruction 设置Select参数指令
const uint8_t SET_SELECT_PARAMETER_CMD[] = {0xBB, 0x00, 0x0C, 0x00, 0x13, 0x01, 0x00, 0x00, 0x00,
                                            0x20, 0x60, 0x00, 0x30, 0x75, 0x1F, 0xEB, 0x70, 0x5C,
                                            0x59, 0x04, 0xE3, 0xD5, 0x0D, 0x70, 0xAD, 0x7E};
// SELECT OK RESPONSE 选中成功响应帧
const uint8_t SET_SELECT_OK[]            = {0xBB, 0x01, 0x0C, 0x00, 0x01, 0x00, 0x0E, 0x7E};
const uint8_t GET_SELECT_PARAMETER_CMD[] = {0xBB, 0x00, 0x0B, 0x00, 0x00, 0x0B, 0x7E};
const uint8_t READ_STORAGE_CMD[]         = {0xBB, 0x00, 0x39, 0x00, 0x09, 0x00, 0x00, 0xFF,
                                            0xFF, 0x03, 0x00, 0x00, 0x00, 0x02, 0x45, 0x7E};
const uint8_t READ_STORAGE_ERROR[]       = {0xBB, 0x01, 0xFF, 0x00, 0x01, 0x09, 0x0A, 0x7E};
const uint8_t WRITE_STORAGE_CMD[]        = {0xBB, 0x00, 0x49, 0x00, 0x0D, 0x00, 0x00, 0xFF, 0xFF, 0x03,
                                            0x00, 0x00, 0x00, 0x02, 0x12, 0x34, 0x56, 0x78, 0x6D, 0x7E};
const uint8_t WRITE_STORAGE_ERROR[]      = {0xBB, 0x01, 0xFF, 0x00, 0x01, 0x10, 0x0A, 0x7E};
// Set the transmitting power 设置发射功率
const uint8_t SET_TX_POWER[] = {0xBB, 0x00, 0xB6, 0x00, 0x02, 0x07, 0xD0, 0x8F, 0x7E};

//   {0xBB, 0x00, 0x28, 0x00, 0x00, 0x28, 0x7E,},             //5. Stop multiple
//   polling instructions 5.停止多次轮询指令 { 0xBB, 0x00, 0x0C, 0x00, 0x13,
//   0x01, 0x00, 0x00, 0x00, 0x20,
//     0x60, 0x00, 0x30, 0x75, 0x1F, 0xEB, 0x70, 0x5C, 0x59, 0x04,
//     0xE3, 0xD5, 0x0D, 0x70, 0xAD, 0x7E,
//   },                        //6.
//   {0xBB, 0x00, 0x0B, 0x00, 0x00, 0x0B, 0x7E,},              //7. Get the
//   SELECT parameter 7.获取Select参数 {0xBB, 0x00, 0x12, 0x00, 0x01, 0x01,
//   0x14, 0x7E,},        //8. Set the SELECT mode 8.设置Select模式 { 0xBB,
//   0x00, 0x39, 0x00, 0x09, 0x00, 0x00, 0xFF, 0xFF, 0x03,
//     0x00, 0x00, 0x00, 0x02, 0x45, 0x7E,
//   },                      //9. Read label data storage
//   area 9.读标签数据储存区 { 0xBB, 0x00, 0x49, 0x00, 0x0D, 0x00, 0x00, 0xFF,
//   0xFF, 0x03,
//     0x00, 0x00, 0x00, 0x02, 0x12, 0x34, 0x56, 0x78, 0x6D, 0x7E,
//   },   //10. Write the label data store 10.写标签数据存储区
//   { 0xBB, 0x00, 0x82, 0x00, 0x07, 0x00, 0x00, 0xFF,
//     0xFF, 0x02, 0x00, 0x80, 0x09, 0x7E,
//   },                       //11. Lock the LOCK label data store 11.锁定Lock
//   标签数据存储区 { 0xBB, 0x00, 0x65, 0x00, 0x04, 0x00, 0x00, 0xFF, 0xFF,
//   0x67,
//     0x7E,
//   },                                                //12. Inactivate the kill
//   tag 12.灭活kill标签 {0xBB, 0x00, 0x11, 0x00, 0x02, 0x00, 0xC0, 0xD3,
//   0x7E,}, //13. Set communication baud rate 13.设置通信波特率 {0xBB, 0x00,
//   0x0D, 0x00, 0x00, 0x0D, 0x7E,},            //14. Get parameters related to
//   the Query command 14.获取Query命令相关参数 {0xBB, 0x00, 0x0E, 0x00, 0x02,
//   0x10, 0x20, 0x40, 0x7E,}, //15. Set the Query parameter 15.设置Query参数
//   {0xBB, 0x00, 0x07, 0x00, 0x01, 0x01, 0x09, 0x7E,},      //16. Set up work
//   area 16.设置工作地区 {0xBB, 0x00, 0x08, 0x00, 0x00, 0x08, 0x7E,}, //17.
//   Acquire work locations 17.获取工作地区 {0xBB, 0x00, 0xAB, 0x00, 0x01, 0x01,
//   0xAC, 0x7E,},      //18. Set up working channel 18.设置工作信道 {0xBB,
//   0x00, 0xAA, 0x00, 0x00, 0xAA, 0x7E,},            //19. Get the working
//   channel 19.获取工作信道 {0xBB, 0x00, 0xAD, 0x00, 0x01, 0xFF, 0xAD, 0x7E,},
//   //20. Set to automatic frequency hopping mode 20.设置为自动跳频模式 { 0xBB,
//   0x00, 0xA9, 0x00, 0x06, 0x05, 0x01, 0x02,
//     0x03, 0x04, 0x05, 0xC3, 0x7E,
//   },                             //21. Insert the working
//   channel 21.插入工作信道 {0xBB, 0x00, 0xB7, 0x00, 0x00, 0xB7, 0x7E,}, //22.
//   Acquire transmitting power 22.获取发射功率 {0xBB, 0x00, 0xB6, 0x00, 0x02,
//   0x07, 0xD0, 0x8F, 0x7E,}, //23. Set the transmitting power 23.设置发射功率
//   {0xBB, 0x00, 0xB0, 0x00, 0x01, 0xFF, 0xB0, 0x7E,},      //24. Set up
//   transmitting continuous carrier 24.设置发射连续载波 {0xBB, 0x00, 0xF1,
//   0x00, 0x00, 0xF1, 0x7E,},            //25. Gets the receiving demodulator
//   parameters 25.获取接收解调器参数 {0xBB, 0x00, 0xF0, 0x00, 0x04, 0x03, 0x06,
//   0x01, 0xB0, 0xAE, 0x7E,}, //26. Set the receiving demodulator
//   parameters 26.设置接收解调器参数 {0xBB, 0x00, 0xF2, 0x00, 0x00, 0xF2,
//   0x7E,},            //27. Test the RF input block
//   signal 27.测试射频输入端阻塞信号 {0xBB, 0x00, 0xF3, 0x00, 0x00, 0xF3,
//   0x7E,},            //28. Test the RSSI signal at the RF
//   input 28.测试射频输入端 RSSI 信号 {0x00}, {0xBB, 0x00, 0x17, 0x00, 0x00,
//   0x17, 0x7E,},            //30. Module hibernation 30.模块休眠 {0xBB, 0x00,
//   0x1D, 0x00, 0x01, 0x02, 0x20, 0x7E,},      //31. Idle hibernation time of
//   module 31.模块空闲休眠时间 {0xBB, 0x00, 0x04, 0x00, 0x03, 0x01, 0x01, 0x03,
//   0x0C, 0x7E,}, //32. The IDLE mode 32. IDLE 模式 {0xBB, 0x00, 0xE1, 0x00,
//   0x05, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xE4, 0x7E,}, //33.NXP G2X label
//   supports ReadProtect/Reset ReadProtect command 33.NXP G2X 标签支持
//   ReadProtect/Reset ReadProtect 指令 {0xBB, 0x00, 0xE3, 0x00, 0x05, 0x00,
//   0x00, 0xFF, 0xFF, 0x01, 0xE7, 0x7E,}, //34. The NXP G2X label supports the
//   CHANGE EAS directive 34.NXP G2X 标签支持 Change EAS 指令 {0xBB, 0x00, 0xE4,
//   0x00, 0x00, 0xE4, 0x7E,},            //35. The NXP G2X tag supports the
//   EAS_ALARM directive 35.NXP G2X 标签支持 EAS_Alarm 指令 {0xBB, 0x00, 0xE0,
//   0x00, 0x06, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xE4, 0x7E,}, //36.NXP G2X
//   label 16bits config-word 36.NXP G2X 标签的 16bits Config-Word { 0xBB, 0x00,
//   0xE5, 0x00, 0x08, 0x00, 0x00, 0xFF,
//     0xFF, 0x01, 0x01, 0x40, 0x00, 0x2D, 0x7E,
//   },                   //37.Impinj Monza 4 Qt tags support Qt
//   instructions 37.Impinj Monza 4 QT 标签支持 QT 指令 { 0xBB, 0x00, 0xD3,
//   0x00, 0x0B, 0x00, 0x00, 0xFF,
//     0xFF, 0x01, 0x03, 0x00, 0x00, 0x01, 0x07, 0x00, 0xE8, 0x7E,
//   },   //38.The BlockPermalock directive permanently locks blocks of a user's
//   Block 38.BlockPermalock 指令可以永久锁定用户区的某几个 Block

// };
