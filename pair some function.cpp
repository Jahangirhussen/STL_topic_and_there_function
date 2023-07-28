#include<bits/stdc++.h>
using namespace std;
void pair_insert_declear()
{
    cout<<"  start pair_insert_declear \n\n";

    pair<int,int>pair_1,pair_2;///pair declear.int,string diye same babei kaj kore.
    pair<int,char>pair_3(10,'A');///pair declear and input.int,string diye same babei kaj kore.
    /// char er jaygay  jodi int ditam taile output 65 hoito.
    pair_1.first=10;///input
    pair_1.second=20;
    cout<<pair_1.first<<" "<<pair_1.second<<endl;///cout<<pair_1.first<<" "<<pair_1.second<<endl;///cout<<pair_1.first<<" "<<pair_1.second<<endl;///output.
    pair_2=pair_1;/// = operator
    /** pair<int,int>p2(p1);p2 tea p1 er value assing raka
    p3=make_pair(1,8)// p3 te pair_insert_declear  raaka,

     */
    /// p2.swap(p1); eta swap kore
    cout<<pair_2.first<<" "<<pair_2.second<<endl;
    cout<<pair_3.first<<" "<<pair_3.second<<endl;///



    cout<<"\n \n end pair_insert_declear \n\n";
}
///another function,
void pair_operator()
{
    cout<<" start pair_operator \n\n";

pair<int,int>p1(40,30);
    pair<int,int>p2(30,40);

    if(p1==p2)cout<<"yes\n";///pair 2 ra value same hote hobe
    else cout<<"no\n";

    if(p1!=p2)cout<<"yes\n";///pair 2 ra value same hote hobe
    else cout<<"no\n";

    if(p1>=p2)cout<<"yes\n";///pair 2 tar modde 1st ta boro bole yes.2nd ta dekbei na but 1st ta soman but big na than 2nd ta dekbe
    else cout<<"no\n";

    if(p1<=p2)cout<<"yes\n";///pair 2 ra valu er 1st ta soman hole than 2nd ta dekbe eta ja tai return korbe but 1st ta sotto hole 2nd ta dekbe na sate sate return korbe.
    else cout<<"no\n";



    cout<<" \n \n End pair_operator \n\n";
}


int main()
{
///pair_insert_declear();
    pair_operator();

    return 0;
}
