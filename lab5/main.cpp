#include "Header.h"
#include "ListCircleInRhombus.h"

double Quest(ListCircleInRhombus list)
{
	int size = list.GetSize();
	double res = 0;

	unsigned int start_time = clock();
   
	for (int i = 0; i < size; i++)
	{
		if (list[i].GetSquare() == 0)
		{
			res += 1 / i;
		}
	}
	
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;

	cout << "Час роботи циклу: " << search_time << endl;

	return size / res;
}

int main() {

}