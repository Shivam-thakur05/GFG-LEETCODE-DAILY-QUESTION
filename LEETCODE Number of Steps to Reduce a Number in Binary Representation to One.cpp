class Solution {
public:
    void addOne(string &s){
        int i = s.length()-1;
        while(i>=0 && s[i] != '0'){ //
            s[i] = '0';
            i--;
        } 
    if(i < 0){
        s = '1' + s;
    }
    else{
        s[i] = '1';
    }
}
int numSteps(string s) {
    int op = 0;
    while(s.length()>1){
        int n = s.length(); //length of string
            if(s[n-1] == '0'){
                s.pop_back();    //if last digit is 0 then number is even so pop the last element
            }
            else{
                addOne(s);      //if number is odd then add one
            }
     op++;
    }
return op;
}
};

