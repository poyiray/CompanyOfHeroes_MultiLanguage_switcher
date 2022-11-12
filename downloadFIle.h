#include<iostream>
#include<Windows.h>
#include<direct.h>
#include<string>
#include<fstream>
#include<urlmon.h>
#pragma comment(lib,"URlmon")
using namespace std;

class Download
{
public:

	void Download_file();

	void Chinese_ini();
	void Copy_sChinese();
	void Copy_tChinese();
	void English();
	void menu();

	const char NewFile_Path[57] = "CoH\\Engine\\Locale\\ChineseTrad\\RelicCOH.ChineseTrad.ucs";
	char mainChinese_URL[MAX_PATH] = "https://link.jscdn.cn/sharepoint/aHR0cHM6Ly9nYXBwc3lyZHNiY2EtbXkuc2hhcmVwb2ludC5jb20vOnU6L2cvcGVyc29uYWwvMzQ5OTc2Nzk1X2dhcHBzX3lyZHNiX2NhL0VVNTdFVmNaUDRWTXZjRHl4UUVOcmVNQlkxczV1aFp3SWVscnVvNzBGTFV6VUE_ZT1UdlZPZ1Q.sga";
	char Engine_URL[MAX_PATH] = "https://link.jscdn.cn/sharepoint/aHR0cHM6Ly9nYXBwc3lyZHNiY2EtbXkuc2hhcmVwb2ludC5jb20vOnU6L2cvcGVyc29uYWwvMzQ5OTc2Nzk1X2dhcHBzX3lyZHNiX2NhL0VmaGNjUFprM09SQ3BnM1lqWjV6Wmd3QkdEcXVuaklhcDFxOGlnak92ZVRYNUE_ZT16Ykx5MXM.sga";
	char mainChinese_PATH[MAX_PATH] = "Engine\\Archives\\EngineChineseTrad.sga";
	char Engine_PATH[MAX_PATH] = "Engine\\Archives\\Engine.sga";

	char sChinese_URL[MAX_PATH] = "https://link.jscdn.cn/sharepoint/aHR0cHM6Ly9nYXBwc3lyZHNiY2EtbXkuc2hhcmVwb2ludC5jb20vOnU6L2cvcGVyc29uYWwvMzQ5OTc2Nzk1X2dhcHBzX3lyZHNiX2NhL0VkZ0FTY2xzbDVST2c0UWdHa1BVVU5rQkR4TTJpZElSd3dJUWRHUHJvUjg2MFE_ZT1YZ1U1Smw.ucs";
	char tChinese_URL[MAX_PATH] = "https://link.jscdn.cn/sharepoint/aHR0cHM6Ly9nYXBwc3lyZHNiY2EtbXkuc2hhcmVwb2ludC5jb20vOnU6L2cvcGVyc29uYWwvMzQ5OTc2Nzk1X2dhcHBzX3lyZHNiX2NhL0VlaG9uV2l5LW85SGxiTFVDSEcza1BBQkZCTFV6SW1raXRIeDhfTmhsNmRuTlE_ZT12UURUeXM.ucs";
	char English_URL[MAX_PATH] = "https://link.jscdn.cn/sharepoint/aHR0cHM6Ly9nYXBwc3lyZHNiY2EtbXkuc2hhcmVwb2ludC5jb20vOnU6L2cvcGVyc29uYWwvMzQ5OTc2Nzk1X2dhcHBzX3lyZHNiX2NhL0VhNGlET1JmN3JsTm5scnpZMTdUMS1vQldoMFpJczRIcV9IdlpXX1dTOEFoRmc_ZT1ydFZKa0I.ucs";
	char English_PATH[MAX_PATH] = "CoH\\Engine\\Locale\\English\\RelicCoH.English.ucs";
	char sChinese_PATH[MAX_PATH] = "CoH\\Engine\\Locale\\SimpleChinese\\RelicCOH.ChineseTrad.ucs";
	char tChinese_PATH[MAX_PATH] = "CoH\\Engine\\Locale\\tChinese\\RelicCOH.ChineseTrad.ucs";
};