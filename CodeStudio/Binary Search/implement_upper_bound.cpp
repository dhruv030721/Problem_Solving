int upperBound(vector<int> &arr, int x, int n){
	int s = 0;
	int e = arr.size() - 1;
	int mid = s + (e - s)/2;
	int minIndex = n;

	while(s <= e){
		if(arr[mid] > x){
			if(mid < minIndex){
				minIndex = mid;
				e = mid - 1;
			}
		}
		else {
			s = mid + 1;
		}

		mid = s + (e - s)/2;
	}	

	return minIndex;
}