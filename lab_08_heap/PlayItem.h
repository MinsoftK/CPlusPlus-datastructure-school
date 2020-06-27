/*
 *	@brief	PlayItem Ŭ������ ��� �Լ� ���
 *	@date	2019.10.06
 *	@author	��μ�
 */


#pragma once
#include <string>
#include <iostream>  

using namespace std;

// �� �÷��̿� ���� ������ ��� Ŭ���� (���� �÷��� Ƚ��, ���� ���� ��)
class PlayItem {

private:
	string MusicNumber; // Primary Key �� �������� �����Ƿ� Master ���� ���´�.
	int Playcount; // ���� �÷��� Ƚ��
	int InTime; // ���� ���� ����

public:

	PlayItem() {
		MusicNumber = "";
		Playcount = 0;
		InTime = 0;
	}
	~PlayItem() {}

	//������ ������ ������ �Էµ� ������ �д� Get
	string GetMusicNumber();
	int GetPlaycount();
	int GetInTime();
	//������ ������ ������ �Է¹޴� Set
	void SetMusicNumber(string MN);//music Number set
	void SetPlaycount(int play);
	void SetInTime(int Time);
	
	void SetRecord(string inMusicNumber, int inplaycount, int inInTime) {
		MusicNumber = inMusicNumber; 
		Playcount = inplaycount;
		InTime = inInTime;
	}

	void SetMusicNumberFromKB();

	//������ ����������� ���� ����ϴ� �Լ��� 
	void DisPlayMusicNumberOnScreen();
	void DisPlayPlayCountOnScreen();
	void DisPlayInTimeOnScreen();
	void DisPlayRecordOnScreen();

	//Primary Key���� �񱳸� ���� ������ �����ε�
	//ostream& operator << (PlayItem& item);
	bool operator ==(PlayItem& item);
	bool operator > (PlayItem& item);
	bool operator < (PlayItem& item);
	bool operator >= (PlayItem& item);
	bool operator <= (PlayItem& item);
};