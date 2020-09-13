/*
using namespace std;

#ifndef Number_Array
#define Number_Array


class Number_Array
{
private:
	int amt;
	float * arry;
public:
	Number_Array(int amt) {
		arry = new float[amt];

		for (int index = 0; index < amt; index++) {
			*(arry + index) = 0;
		}
	}
		
	void add(float num, int i) {
		*(arry + i - 1) = num;
	}

	float getRetrieve(int i) {
		return arry[i];
	}

	float getHigh() {
		float max=*(arry);
		for (int y = 0; y < amt;y++) {
			if (*(arry + y) > max)
				max = *(arry + y);
		}
		return max;
	}

	float getLow() {
		float low = *(arry);
		for (int y = 0; y < amt; y++) {
			if (*(arry + y) < low)
				low = *(arry + y);
		}
		return low;
	}

	float avg() {
		float avg, sum;
		for (int y = 0; y < amt; y++) {
			sum += *(arry + y);
		}
		avg = sum / amt;
		return avg;
	}


};

*/