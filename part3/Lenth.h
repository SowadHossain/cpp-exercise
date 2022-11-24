#ifndef LENTH_H
#define LENTH_H
class Lenth{

public: 
	explicit Lenth(int value);
	bool operator==(const Lenth& other) const;
	bool operator==(int othre) const;
private:
	int value;
};

#endif //LENTH_H
