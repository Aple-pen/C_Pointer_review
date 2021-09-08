#include <iostream>

using namespace std;

/**
 * - 사과의 구매를 목적으로 0보다 작은 수를 전달할수 없다.
 *          위의 제약사항을 항상 만족시킬수 있도록 예제를 변경하고, 예제의 안정성을 높일 수 있도록 일부 함수를 const 로 선언해보자!
 **/ 

class FruitSeller{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public :
        bool InitMemebers(int price,int num,int money){
            //0 이하의 수를 받았을때 false 를 리턴
            if(price < 0 || num <0 || money<0){
                return false;
            }else{
                APPLE_PRICE = price;
                numOfApples = num;
                myMoney = money;
                return true;
            }
        }
        int SaleApples(int money){
            int num=money/APPLE_PRICE;
            numOfApples -= num;
            myMoney +=money;
            return num;
        }
        void ShowSalesResult() const{
            cout << "result apples : " <<numOfApples <<endl;
            cout << "get money : " <<myMoney <<endl<<endl;
        }
};

class FruitBuyer{
    int myMoney; //private
    int numOfApples;
    public:
        bool InitMembers(int money){
            if(money <0){
                return false;
            }else{
                myMoney = money;
                numOfApples = 0;
                return true;
            }
                
        }
        void BuyApples(FruitSeller &seller,int money){
            numOfApples +=seller.SaleApples(money);
            myMoney-=money;
        }
        void ShowBuyResult() const{
            cout <<"balance :" <<myMoney <<endl;
            cout <<"apples : " <<numOfApples <<endl<<endl;
        }
};

int main(){
    FruitSeller seller;
    if(!seller.InitMemebers(1000,-20,0)){
        cout <<"Error" <<endl;
    }
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller,2000);
    cout <<"seller Info : "<<endl;
    seller.ShowSalesResult();
    cout << "buyer Info : " <<endl;
    buyer.ShowBuyResult();
    return 0; 
}