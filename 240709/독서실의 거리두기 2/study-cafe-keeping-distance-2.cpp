#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

int n;
char seat[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>seat[i];
    }
    int max_dis=0;
    int min_dis=3000;
    int one_count=0;
    int dis=1;
    int first,last;
    for(int i=0;i<n;i++){
        if(seat[i]=='1'){
            one_count++;
            if(one_count==1){
                first=i;
            }
            if(one_count!=1){
                max_dis=max(max_dis,dis);
                min_dis=min(min_dis,dis);
                
            }
            dis=1;
        }
        else{
            dis++;
        }
    }
    
    for(int i=n-1;i>=0;i--){
        if(seat[i]=='1'){
            last=i;
            break;
        }
    }
    
    int first_dis=first;
    int last_dis=n-1-last;
    // if(seat[0]=='1'){
    //     first_dis=5000;
    // }
    // if(seat[n-1]=='1'){
    //     last_dis=5000;
    // }
    if(last_dis<max_dis/2&&last_dis<min_dis){
        last_dis=5000;
    }
     if(first_dis<max_dis/2&&first_dis<min_dis){
        first_dis=5000;
    }
    
    if(first_dis!=5000){
        if(last_dis!=5000){
            if(first_dis>=last_dis){
                if(first_dis>=max_dis/2&&first_dis>=min_dis){
                    if(max_dis/2>=min_dis){
                        cout<<max_dis/2;
                        return 0;
                    }
                    else{
                        cout<<min_dis;
                        return 0;
                    }
                }
                if(first_dis>=max_dis/2&&first_dis<=min_dis){
                cout<<first_dis;
                return 0;
                }
                else if(max_dis/2<=min_dis&&max_dis/2>=first_dis){
                cout<<max_dis/2;
                return 0;
                }
                else if(min_dis<=max_dis/2&&min_dis>=first_dis){
                cout<<min_dis;
                return 0;
                }
            }
            else{
                first_dis=last_dis;
                if(first_dis>=max_dis/2&&first_dis>=min_dis){
                    if(max_dis/2>=min_dis){
                        cout<<max_dis/2;
                        return 0;
                    }
                    else{
                        cout<<min_dis;
                        return 0;
                    }
                }
                if(first_dis>=max_dis/2&&first_dis<=min_dis){
                cout<<first_dis;
                return 0;
                }
                else if(max_dis/2<=min_dis&&max_dis/2>=first_dis){
                cout<<max_dis/2;
                return 0;
                }
                else if(min_dis<=max_dis/2&&min_dis>=first_dis){
                cout<<min_dis;
                return 0;
                }
            }
        }
        else{
            if(first_dis>=max_dis/2&&first_dis>=min_dis){
                    if(max_dis/2>=min_dis){
                        cout<<max_dis/2;
                        return 0;
                    }
                    else{
                        cout<<min_dis;
                        return 0;
                    }
                }
            if(first_dis>=max_dis/2&&first_dis<=min_dis){
                cout<<first_dis;
                return 0;
            }
            else if(max_dis/2<=min_dis&&max_dis/2>=first_dis){
                cout<<max_dis/2;
                return 0;
            }
            else if(min_dis<=max_dis/2&&min_dis>=first_dis){
                cout<<min_dis;
                return 0;
            }
        }
    }
    else if(first_dis==5000&&last_dis!=5000){
        first_dis=last_dis;
                if(first_dis>=max_dis/2&&first_dis>=min_dis){
                    if(max_dis/2>=min_dis){
                        cout<<max_dis/2;
                        return 0;
                    }
                    else{
                        cout<<min_dis;
                        return 0;
                    }
                }
                if(first_dis>=max_dis/2&&first_dis<=min_dis){
                cout<<first_dis;
                return 0;
                }
                else if(max_dis/2<=min_dis&&max_dis/2>=first_dis){
                cout<<max_dis/2;
                return 0;
                }
                else if(min_dis<=max_dis/2&&min_dis>=first_dis){
                cout<<min_dis;
                return 0;
                }
    }
    if(first_dis==5000&&last_dis==5000){
        if(max_dis/2<=min_dis){
            cout<<max_dis/2;
            return 0;
        }
        else{
            cout<<min_dis;
            return 0;
        }
    }
  




    // if(max_dis/2<=min_dis){
    //     if(max_dis/2<=first_dis&&max_dis/2<=last_dis){
    //         cout<<max_dis/2;
    //     }
    //     else if(first_dis<=max_dis/2&&first_dis<=last_dis){
    //         cout<<first_dis;
    //     }
    //     else if(last_dis<=max_dis/2&&last_dis<=first_dis){
    //         cout<<last_dis;
    //     }
    // }
    // else{
    //     if(min_dis<=first_dis&&min_dis<=last_dis){
    //         cout<<min_dis;
    //     }
    //     else if(first_dis<=min_dis&&first_dis<=last_dis){
    //         cout<<first_dis;
    //     }
    //     else if(last_dis<=min_dis&&last_dis<=first_dis){
    //         cout<<last_dis;
    //     }
    // }

    return 0;
}