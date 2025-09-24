#include <string>
using namespace std;

class TV {
	private:
		string brand;
		float height;
		string resolution;
		float price;
	
	public:
		TV();
		TV(TV & other);
		TV(string brand , float height , string resolution , float price);
		
		string getBrand ();
		float getHeight ();
		string getResolution ();
		float getPrice ();
		
		void setBrand (string brand);
		void setHeight (float height);
		void setResolution (string resolution);
		void setPrice (float price);
		
		void printTV ();
		void fillTV();
		void copy (TV & other);
		
};
