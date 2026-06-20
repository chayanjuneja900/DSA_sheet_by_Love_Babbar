#include<bits/stdc++.h>
using namespace std;

double sq(double x){
    return x*x ;
}


double dist_from_a_point(tuple<int, int, int> &l , double x, double y, pair<int,int> p){

    auto [a,b,c] = l;

    return sqrt(sq(x-p.first)+sq(y-p.second));
}


double dist_from_all_points(double x, vector<pair<int, int>> &p, tuple<int, int, int> &l){

    auto [a,b,c] = l;

    double y ;

    if(b==0){
        y = x;

        
        x =  -1* c/double(a);

    }
    else{

    y = -1 * (c + (a*x))/(double)b; 
}

    int n =p.size();

    double dist=0;

    for(int i=0;i<n;i++){
        dist += dist_from_a_point(l,x,y,p[i]);
    }

    return dist;
}

double findOptimumCost(tuple<int, int, int> l, vector<pair<int, int>> p, int n) {
        
    double eps =1e-6;

    double hi =1e6;
    double lo = -1e6;

    double mid1,mid2;


    while((hi-lo)>eps){
        
        mid1 = lo + (hi-lo)/3.0;
        mid2 = hi - (hi-lo)/3.0;


        double dist1 = dist_from_all_points(mid1,p,l);
        double dist2 = dist_from_all_points(mid2,p,l);

        if(dist1<dist2){
            hi=mid2;
        }
        else{
            lo =mid1;
        }
    }



    return dist_from_all_points((hi+lo)/2,p,l);


        
    }

    int main(){

    }