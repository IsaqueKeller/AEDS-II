#include <string>
using namespace std;

class Motor {
	private:
		string type;
		float potentia;
		float consumption;
	
	public:
		Motor();
		Motor(Motor & other);
		void printMotor ();
		void fillMotor ();
		
		string getType();
		void setType(string type);
		float getPotentia();
		void setPotentia(float potentia);
		float getConsumption();
		void setConsumption(float consumption);
};
