#include<bits/stdc++.h>
using namespace std;

void multi_map()
{
    cout<<"******multi_map start from here. ******\n";

    multimap<int,int>map_1;
/// map_1[1]=90;// eta kora jabe na karon eta multi map
    map_1.insert({1,10});
    map_1.insert({2,50});
    map_1.insert({3,140});///2 number index
    map_1.insert({4,20});
    map_1.insert({5,120});
    map_1.insert({3,90});///multi map a same number index er a ekadik value raka jay,like 3number index.

///auto iterator diye print map er moto but iterato diye binno seta niche dewta holo;
    /** size ,max_size,empty,= operator,swap,erase ager moto,but erase korle same name er index wala sob value delet hoye jabe but iterator diye erase korle just ektx index delet hobe*/
    auto it_1=map_1.begin();/// 1st ekta value remove korbe.
    advan ce(it_1,2);///ekn 2nd index mane3,140 kat korbe shuru theke.
    map_1.erase(it_1);
    multimap<int,int>:: iterator it_1;
    for(it_1= map_1.begin(); it_1!= map_1.end(); it_1++)
    {
        cout<<it_1->first<<" "<<it_1->second<<endl;///auto chara map print er system.
        ///-> er bodole . dile o kaj kore
    }
    cout<<"******multi_map end there. ******\n";
    ////auto it=map_1.lower_bond(key);zero index text theje sob cheye kache je value pay seta find kore but jodi oi index na take tobe er pore je index ace take niye kaj kore.
////auto it=map_1.upper_bond(key); eta key er pore je value kache seta point korbe;
}

int main()
{
    multi_map();


    return 0;
}
