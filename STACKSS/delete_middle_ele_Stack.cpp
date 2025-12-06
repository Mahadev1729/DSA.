void solve(stack<int>&inputStack,int count,int size){
        if(count==size/2){
            inputStack.pop();
            return ;
        }
        int num=inputStack.top();
        inputStack.pop();
        
        solve(inputStack,count+1,size);
        inputStack.push(num);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int N=s.size();
        int count=0;
        
        solve(s,count,N);
    }
