//a<=1e15
//b in 1.00 fromat
long long a;
    string b;
    cin>>a>>b;

    long long bs=((b[0]-'0')*100)+((b[2]-'0')*10)+((b[3]-'0'));


    long long ans=a*bs;
    cout<<ans /100<<endl;

