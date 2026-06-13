#include<bits/stdc++.h>
using namespace std;
bool is_valid(string &s){
    if(s.size()>1 && s[0]=='0') return false;

    if(s.empty()) return false;

    int val=stoi(s);
    return val <= 255;

}

void rec_IP_gen(string &s, int i ,string curr,int cnt, vector<string > &res){

    if(i >=s.size()) return;

    if(cnt==3){
        string last= s.substr(i);

        if(last.size()<=3 && is_valid(last)){

            res.push_back(curr+last);
            return;
        }
    }

    string segment="";

    for(int j=i;j<min(i+3,(int)s.size());j++){

        segment+= s[j];

        if(is_valid(segment)){
            rec_IP_gen(s,j+1,curr+segment+'.',cnt+1,res);
        }
    }
}
 vector<string> generateIp(string &s) {
         vector<string> ans;

         string curr="";

         rec_IP_gen(s,0,curr,0,ans);



        return ans;
        
    }
int main(){}