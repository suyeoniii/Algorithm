#include <string>
#include <vector>

using namespace std;

int main(int n) {
    
    int n;  //2~n까지의 소수개수 구하기
    int answer;
    bool isPrime = true;
    vector<int> v;
    v.push_back(2);
    
    cin>>n;
    
    for(int i = 3; i<=n; i++){
        isPrime = true;
        for(int j = 0; j*j <= v.size(); j++){
            if(i<v[j]){
                break;
            }
            if(i%v[j]==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
        v.push_back(i);
        }
    }
    answer = v.size();
    cout << answer;
}
