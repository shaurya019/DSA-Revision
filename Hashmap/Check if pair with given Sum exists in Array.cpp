bool hasArrayTwoCandidates(int arr[], int n, int k) {
	    set<int>s;
	    for(int i=0;i<n;i++){
	        if(s.size() > 0 && s.find(k-arr[i])!=s.end()){
	            return true;
	        }
	        s.insert(arr[i]);
	    }
	    return false;
	}