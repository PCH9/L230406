#pragma once

class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter(); // �Ҹ��� Ŭ������ virtual �� �ٿ������ -> �ȱ׷��� �ڽ��� �����Ͱ� ��� ����

	//methed, member function
	virtual void Move(); // virtual ��ӵȰ� �ִ��� Ȯ�� / �ڿ� override�� ������ ���� ó���̶�� ��
	void Attack();

protected: // ����� �� �� �ִµ� ���� �ǵ��� �� ��
	
	//property, member variable
	int HP;
	int MP;

private: // �ƹ��� �� �ǵ�� '��'�� �ǵ� �� ����
};

