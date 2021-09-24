int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, cost = 0, val;
        cin>>n;
        vector <int> A;
        for(int i = 0; i < n; i++){
            cin>>val;
            A.push_back(val);
        }
        for(int i = 0; i < n - 1; i++){
            int minimum = INT_MAX, index;
            for(int k = i; k < n; k++){
                if(A[k] < minimum){
                    minimum = A[k];
                    index = k;
                }
            }
            cost = cost + index - i + 1;
            reverse(A.begin() + i, A.begin() + index + 1);
        }
        cout<<"Case #"<<i + 1<<": "<<cost<<endl;
    }
    return 0;