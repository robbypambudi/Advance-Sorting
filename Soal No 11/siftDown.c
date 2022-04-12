#include "header.h"

void siftDown(int key, int num[], int root, int last)
{
	int bigger = 2 * root;
	while (bigger <= last)
	{					   // while there is at least one child
		if (bigger < last) // there is a right child as well; find the bigger
			if (num[bigger + 1] > num[bigger])
				bigger++;
		//'bigger' holds the index of the bigger child
		if (key >= num[bigger])
			break;
		// key is smaller; promote num[bigger]
		num[root] = num[bigger];
		root = bigger;
		bigger = 2 * root;
	}
	num[root] = key;
} // end siftDown
