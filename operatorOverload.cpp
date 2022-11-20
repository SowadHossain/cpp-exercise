#include <iostream>

using namespace std;

struct Point{
	int x;
	int y;
};

bool operator==(const Point& first,const Point& second){
	return (first.x == second.x && first.y == second.y);	
}

ostream& operator<<(ostream& stream, const Point& point){
	return stream <<"(" << point.x << ", " << point.y << ")" ;
	
}


int main(){
	Point x {1,2};
	Point y {1,5};

	cout << (x == y) << endl
		 << x;

	return 0;
}
