ong long minVal = arr[0];
	    long long maxVal = arr[0];

	    long long maxProduct = arr[0];

	    for (int i = 1; i < n; i++) {

	        
	        if (arr[i] < 0) swap(maxVal, minVal);

	        
	        maxVal = max((long long)arr[i], maxVal * arr[i]);
	        minVal = min((long long)arr[i], minVal * arr[i]);

	        
	        maxProduct = max(maxProduct, maxVal);
	    }

	   
	    return maxProduct;
      Link = (https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions)
