vector<int> arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp = A[i][j];
            arr.push_back(temp);
        }
    }
    int low, high, mid, flag = 0;
    low = 0; 
    high = ((n * m) - 1);
    while(high >= low){
        mid = (high + low) / 2;
        if(arr[mid] == B){
            cout<<"1";
            flag = 1;
        }
        else if(arr[mid] > B){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(flag == 0){
        cout<<"0";
    }