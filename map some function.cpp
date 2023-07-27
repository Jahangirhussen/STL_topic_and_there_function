#include<bits/stdc++.h>
using namespace std;
void map_for_int_insert_output_size_maxsize()
{
    cout<<" *********** map_for_int_insert_output_size_maxsize is on. *********** \n \n";

    map<int,int>map_k; /// map declear key or index.
    map_k.insert({1,77});///output map
    map_k.insert({2,65});
    map_k.insert({3,50});
    map_k.insert({4,80});
    map_k[5]=90;///input but vector a ebabe input neuya jay na.


    cout<<map_k[3]<<endl;///output 3 mane 3 number index
    cout<<map_k.at(4)<<endl;///output 4 mane 4number index
    cout<<" map size "<<map_k.size()<<endl;
    cout<<" map size "<<map_k.max_size()<<endl;/// oi map max koyta value rakte parbe seta.
    for(auto it_k: map_k)/// auto iterator .
    {
        cout<<it_k.first<<" "<<it_k.second<<endl;
    }
    cout<<"agan print without auto \n";
    map<int,int>map_k2;
    map_k2.insert({1,77});///output map
    map_k2.insert({2,65});
    map_k2.insert({3,50});
    map_k2.insert({4,80});
    map<int,int>:: iterator it_k2;
    for(it_k2= map_k2.begin(); it_k2!= map_k2.end(); it_k2++)
    {
        cout<<it_k2->first<<" "<<it_k2->second<<endl;///auto chara map print er system.
    }
    cout<<"in clear function for map_k \n";
    map_k.clear();///ekn map faka
    if(map_k.empty())
    {
        cout<<" clear korar por map_k ekn faka \n";

    }

    cout<<"\n *********** map_for_int_insert_output_size_maxsize is end. *********** \n";
}


///2nd function;
void map_for_int_and_string()
{
    cout<<"*********** map_for_int_and_string is on. *********** \n \n";
    map<int,string>map_s;
    map_s.insert({1,"jahangir"});///output map
    map_s.insert({2,"hussen"});
    map_s.insert({3,"kawsar"});
    map_s.insert({4,"boss"});
    for(auto it_k: map_s)/// auto iterator .
    {
        cout<<it_k.first<<" "<<it_k.second<<endl;
    }
    cout<< "first and string and second a int value rakbo map_2 te \n" ;
    map<string,int>map_s2;
    map_s2.insert({"d",1});///output map
    map_s2.insert({"b",2});
    map_s2.insert({"c",3});
    map_s2.insert({"a",4});
    for(auto it_k: map_s2)/// auto iterator .
    {
        cout<<it_k.first<<" "<<it_k.second<<endl;
    }

    cout<<"*********** map_for_int_and_string is end*********** \n \n";
}

///  new function
void map_k3()
{
cout<<"*********** map_k is start *********** \n\n";


    map<int,int>map_k; /// map declear key or index.
    map_k.insert({1,77});///output map
    map_k.insert({2,65});
    map_k.insert({3,50});
    map_k.insert({4,80});
    map_k[5]=90;
map_k.erase(2);/// 2 number index ba key delet korbe full pair
    for(auto it_k: map_k)/// auto iterator .
    {
        cout<<it_k.first<<" "<<it_k.second<<endl;
    }
int cont3=map_k.count(3);///3 numer index takle seta count a output 1 dibe onnotay jero
int cont2=map_k.count(2);///2 numer index takle seta count a output 1 dibe onnotay jero
cout<<"for 3 number index count = "<<cont3<<endl;
cout<<"for 2 number index count = "<<cont2<<endl<<endl;
map<int,int>map_k1,map_k2;
    map_k1.insert({2,65});
    map_k1.insert({3,50});
    map_k1.insert({4,80});
auto it_1=map_k1.find(3);///index 3 ace kina cheek korbe
if(it_1!=map_k1.end())
    cout<<"3 inex is here in map_k1 find \n";
else
        cout<<"3 inex is here in map_k1 find \n";

        cout<<"= oeprator in \n";
map_k2=map_k1;///map_k2 er value nai so kicu print dibe na but etar value jodi map_k1 er soman kori nthan map_k1 er man ie hobe map_k2 er value.
for(auto it_k: map_k2)/// auto iterator .
    {
        cout<<it_k.first<<" "<<it_k.second<<endl;
    }
map_k2.swap(map_k);///ekn eigula swap hobe;
cout<<"swap im\n";
for(auto it_k: map_k2)/// auto iterator .
    {
        cout<<it_k.first<<" "<<it_k.second<<endl;
    }
    cout<<"\n ***********map_k is end.************ \n\n";
}



int main()
{
///map_for_int_insert_output_size_maxsize();
   /// map_for_int_and_string();
    map_k3();

    return 0;
}
