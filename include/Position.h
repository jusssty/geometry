#ifndef POSITION_H
#define POSITION_H

class Position {
protected:
	int x, y;
public:
	Position();
	~Position();
	Position(int, int);
	void output();
	void input();
	void change_pos();
};

#endif