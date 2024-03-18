class Solution {                                                                                
public:                                                                                
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        int sign = 1; 
        while( i<n && s[i] == ' '){
            i++;
        }
        if(s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }
        long long ans = 0;
        while(i<n){
            if(s[i]>='0' && s[i]<='9'){
                ans = ans*10 + (s[i]-'0');
                if(ans > INT_MAX && sign == -1) return INT_MIN; // if there's overflow either return INT_MIN or INT_MAX
                else if ( ans > INT_MAX && sign == 1) return INT_MAX;
                i++;
            }
            else {
                return ans*sign;
            }
        }
        return ans*sign;
    }
};

#include<bits/stdc++.h>
int createAtoi(string s) {  
    int n = s.length();
    int i = 0;
    long long ans = 0;
    int sign = 1;
    while(i<n && s[i] == ' '){
        i++;
    }
    if(s[i] == '-'){
        sign = -1;
        i++;
    }
    else if(s[i] == '+') i++;
    while(i<n){
        if(s[i]>='0' && s[i]<='9'){
            ans = ans*10+ (s[i]-'0');
            if(ans > INT_MAX && sign == -1) return INT_MIN;
            else if( ans> INT_MAX && sign == 1) return INT_MAX;
            i++;
        }
        else{
            break; // Exit the loop if a non-digit character is encountered
        }     
    }
    ans = ans*sign; // Move this statement outside the loop
    if(ans > INT_MAX) return INT_MAX;
    else if(ans < INT_MIN) return INT_MIN;
    return ans;
}

