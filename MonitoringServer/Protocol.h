#pragma once


//enum class eMessageType
//{
//	MonitorServerMessage = 20000,
//	LoginSSMessage,
//	MonitorDataSSMessage,
//	MonitorClientMessage = 25000,
//	LoginCSMessage,
//	LoginResponseCSMessage,
//	MonitorDataCSMessage
//};
//
//enum class eMonitorDataType
//{
//	GameServerRun = 10,							// GameServer ���� ���� ON / OFF
//	GameServerCPU,								// GameServer CPU ����
//	GameServerMemory,							// GameServer �޸� ��� MByte
//	GameServerSessionCount,						// ���Ӽ��� ���� �� (���ؼ� ��)
//	GameServerAuthModePlayerCount,				// ���Ӽ��� AUTH MODE �÷��̾� ��
//	GameServerGameModePlayerCount,				// ���Ӽ��� GAME MODE �÷��̾� ��
//	GameServerAcceptTPS,						// ���Ӽ��� Accept ó�� �ʴ� Ƚ��
//	GameServerRecvTPS,							// ���Ӽ��� ��Ŷó�� �ʴ� Ƚ��
//	GameServerSendTPS,							// ���Ӽ��� ��Ŷ ������ �ʴ� �Ϸ� Ƚ��
//	GameServerDBWriteTPS,						// ���Ӽ��� DB ���� �޽��� �ʴ� ó�� Ƚ��
//	GameServerDBWriteQueueUseSize,				// ���Ӽ��� DB ���� �޽��� ť ���� (���� ��)
//	GameServerAuthThreadFPS,					// ���Ӽ��� AUTH ������ �ʴ� ������ �� (���� ��)
//	GameServerGameThreadFPS,					// ���Ӽ��� GAME ������ �ʴ� ������ �� (���� ��)
//	GameServerMessagePoolUseSize,				// ���Ӽ��� ��ŶǮ ��뷮
//
//	ChatServerRun = 30,							// ������Ʈ ChatServer ���� ���� ON / OFF
//	ChatServerCPU,								// ������Ʈ ChatServer CPU ����
//	ChatServerMemory,							// ������Ʈ ChatServer �޸� ��� MByte
//	ChatServerSessionCount,						// ä�ü��� ���� �� (���ؼ� ��)
//	ChatServerPlayerCount,						// ä�ü��� �������� ����� �� (���� ������)
//	ChatServerUpdateTPS,						// ä�ü��� UPDATE ������ �ʴ� �ʸ� Ƚ��
//	ChatServerMessagePoolUseSize,				// ä�ü��� ��ŶǮ ��뷮
//	ChatServerJobPoolUseSize,					// ä�ü��� UPDATE MSG Ǯ ��뷮
//
//	ServerCPU = 40,								// ������ǻ�� CPU ��ü ����
//	ServerNonpagedMemory,						// ������ǻ�� �������� �޸� MByte
//	ServerRecvBytes,							// ������ǻ�� ��Ʈ��ũ ���ŷ� KByte
//	ServerSendBytes,							// ������ǻ�� ��Ʈ��ũ �۽ŷ� KByte
//	ServerAvailableMemory						// ������ǻ�� ��밡�� �޸�
//};

enum class eProfileDataType
{
	CpuProfileAvr,
	CpuProfieMin,
	CpuProfileMax,
	
	NonpagedMemoryProfileAvr,
	NonpagedMemoryProfileMin,
	NonpagedMemoryProfileMax,
	
	RecvBytesProfileAvr,
	RecvBytesProfileMin,
	RecvBytesProfileMax,
	
	SendBytesProfileAvr,
	SendBytesProfileMin,
	SendBytesProfileMax,
	
	AvailableMemoryProfileAvr,
	AvailableMemoryProfileMin,
	AvailableMemoryProfileMax,

	GameServerCpuProfileAvr,
	GameServerCpuProfileMin,
	GameServerCpuProfileMax,
	
	GameServerMemoryProfileAvr,
	GameServerMemoryProfileMin,
	GameServerMemoryProfileMax,
	
	GameServerSessionCountProfileAvr,
	GameServerSessionCountProfileMin,
	GameServerSessionCountProfileMax,
	
	GameServerAuthPlayerProfileAvr,
	GameServerAuthPlayerProfileMin,
	GameServerAuthPlayerProfileMax,
	
	GameServerGamePlayerProfileAvr,
	GameServerGamePlayerProfileMin,
	GameServerGamePlayerProfileMax,
	
	GameServerAcceptTPSProfileAvr,
	GameServerAcceptTPSProfileMin,
	GameServerAcceptTPSProfileMax,
	
	GameServerRecvTPSProfileAvr,
	GameServerRecvTPSProfileMin,
	GameServerRecvTPSProfileMax,
	
	GameServerSendTPSProfileAvr,
	GameServerSendTPSProfileMin,
	GameServerSendTPSProfileMax,
	
	GameServerDBWriteTPSProfileAvr,
	GameServerDBWriteTPSProfileMin,
	GameServerDBWriteTPSProfileMax,
	
	GameServerDBWriteQSizeProfileAvr,
	GameServerDBWriteQSizeProfileMin,
	GameServerDBWriteQSizeProfileMax,
	
	GameServerAuthFPSProfileAvr,
	GameServerAuthFPSProfileMin,
	GameServerAuthFPSProfileMax,
	
	GameServerGameFPSProfileAvr,
	GameServerGameFPSProfileMin,
	GameServerGameFPSProfileMax,
	
	GameServerMessagePoolProfileAvr,
	GameServerMessagePoolProfileMin,
	GameServerMessagePoolProfileMax,

	ChatServerCpuProfileAvr,
	ChatServerCpuProfileMin,
	ChatServerCpuProfileMax,
    
	ChatServerMemoryProfileAvr,
	ChatServerMemoryProfileMin,
	ChatServerMemoryProfileMax,
    
	ChatServerSessionCountProfileAvr,
	ChatServerSessionCountProfileMin,
	ChatServerSessionCountProfileMax,
    
	ChatServerPlayerCountProfileAvr,
	ChatServerPlayerCountProfileMin,
	ChatServerPlayerCountProfileMax,
    
    ChatServerUpdateTPSProfileAvr,
    ChatServerUpdateTPSProfileMin,
    ChatServerUpdateTPSProfileMax,
    
    ChatServerMessagePoolProfileAvr,
    ChatServerMessagePoolProfileMin,
    ChatServerMessagePoolProfileMax,
    
    ChatServerUpdateQSizeProfileAvr,
    ChatServerUpdateQSizeProfileMin,
    ChatServerUpdateQSizeProfileMax 
};

enum class eLoginResponseType
{
	LoginSuccess = 1,
	ServerNotFountError,
	SessionKeyError
};


