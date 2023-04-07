#pragma once

class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter(); // 소멸자 클래스에 virtual 꼭 붙여줘야함 -> 안그러면 자식의 데이터가 계속 남음

	//methed, member function
	virtual void Move(); // virtual 상속된게 있는지 확인 / 뒤에 override가 없으면 가장 처음이라는 뜻
	void Attack();

protected: // 상속은 할 수 있는데 남이 건들지 못 함
	
	//property, member variable
	int HP;
	int MP;

private: // 아무도 못 건들고 '나'만 건들 수 있음
};

