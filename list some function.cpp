#include<bits/stdc++.h>
using namespace std;
void list_1()
{
    list<int>jk;
    jk.push_back(5);/// input list
    jk.push_back(0);
    jk.push_back(1);
    jk.push_back(1);
    jk.push_front(6);/// etar kaj sobar samne push ba add kora
    jk.push_front(7);/// 2nd time user koray eta 7 er age push hobe
    list<int> :: iterator mk;///list print korte iterator lage eta chara print hoy na,jar nam amra diyechi "mk"
    /// old version print system;
    for(mk= jk.begin(); mk!=jk.end(); mk++) /// ieerator er shuru hobe "jk" er shuru theke,cholbe jotokon na "jk" sesh hoy totokon;
    {
        cout<<*mk<<"  ";/// mk ahe star diye print korte hoy
    }
    cout<<endl;
    ///esay version print sytem,
    for(auto mk : jk)/// auto dewyay mk iterator "jk" k auto dhore dhore shuru theke sesh porjonto loop chalabe,
    {
        cout<<mk<< " ";/// auto use korle star lage na
    }
    cout<<endl;
    cout<<jk.front()<<endl;///eta 1st value print kore
    cout<<jk.back()<<endl;///eta  last value print kore

    jk.pop_front();///1st value v pop ba delet kore,
    jk.pop_back();/// last value k pop kore,
    for(auto mk : jk)
    {
        cout<<mk<< " ";
    }
    cout<<endl<<jk.size()<<endl;
    jk.clear();/// jk name er list afull clear kore dey,
    cout<<"ekn list  jk clear korlam ,so niche output dibe na"<<endl;
    for(auto mk : jk)/// ekn list faka so output deve na
    {
        cout<<mk<< " ";
    }
    if(jk.empty()) cout<<"empty"<<endl;///jk name er list emty kina cheek korbe
    else cout<<"not empty"<<endl;

    jk.push_back(5);/// input list
    jk.push_back(0);
    jk.push_back(1);
    jk.push_back(1);


    jk.insert(jk.begin(),9);/// insert jk list er shuru theke add korbe "9" value k;    jk.insert(jk.begin()+2,9) eta vector a kah kore list a kore na so..
    list<int> :: iterator in_new;
    in_new=jk.begin();
    advance(in_new,3);///advance function in_new iterator er 3 number index k point korbe;
    jk.insert(in_new,5,4);///ekane 3 number index a 4 ,5 bar insert hobe
    for(auto mk : jk)
    {
        cout<<mk<< " ";
    }
    cout<<endl;

}

void list_2()
{
    list<int>jk2= {2,7,9,87,765};
    list<int> :: iterator kk2;
    kk2=jk2.begin();
    advance(kk2,3);/// eta use nakorle 1st 1 ta remove korto,ekn 3 nu,mber index remove korbe,
    jk2.erase(kk2);

    for(auto kk2 : jk2)/// iterator kk2 jk2 k point kore so jk er shuru theke sesh porjonto loop cholbe
    {
        cout<<kk2<<" ";
    }
    cout<<endl<<endl;


    list<int>jk3= {2,7,9,87,765};
    list<int> :: iterator kk3,kk4;
    kk3=jk3.begin();
    kk4=jk3.begin();
    advance(kk4,3);/// eta use nakorle 1st ta remove korto,ekn 3 nu,mber index remove korbe,
    jk3.erase(kk3,kk4);///kkk3 begin k point korce,kk4 kirce 3 number k,so begin theke 3 number index er age porjonto removeprint korbo;

    for(auto kk3 : jk3)/// iterator kk3 jk3 k point kore so jk er shuru theke sesh porjonto loop cholbe
    {
        cout<<kk3<<" ";
    }

    list<int>jk4= {2,7,9,2,9,7,0,9,765};
    jk4.remove(2);///remove all 2
    list<int> ::iterator kk5;
    cout<<" \n in remove function \n ";
    for(auto kk5 : jk4)///
    {
        cout<<kk5<<" ";
    }
    cout<<endl;
    cout<<"reverse function \n";

    jk4.reverse();///reverse kore

    for(auto kk5 : jk4)///
    {
        cout<<kk5<<" ";
    }
    cout<<endl<<endl;

    cout<<"unique function \n";
    list<int> jk6= {1,2,1,3,3,3,4,5,4};
    list<int> ::iterator kk7;

    jk6.unique();///same ekadik pasapasiekta rakbe na like 1 2 1 3 3,ekane 3 ekta rakbe but 1 kicu korbe na karon era pasapasi na

    for(auto kk7 : jk6)///
    {
        cout<<kk7<<" ";
    }
    cout<<endl<<endl;
}
void list_3()
{
    cout<<"swap 2 list \n";
    list<int>li_1= {1,2,3,7,54,2};
    list<int>li_2= {14,56,75,22,2};
cout<<"before swap li_1 is : ";
    for(auto mk : li_1)cout<<mk<< " ";
    cout<<endl;
    cout<<"before swap li_2 is : ";

    for(auto mk : li_2)cout<<mk<< " ";
    cout<<endl;
    cout<<"after swap \n";
    li_1.swap(li_2);
    cout<<"after swap li_1 is : ";
    for(auto mk : li_1)cout<<mk<< " ";
    cout<<endl;
    cout<<"agter swap li_2 is : ";

    for(auto mk : li_2)cout<<mk<< " ";
    cout<<endl<<endl;

 cout<<"merge 2 list \n";/// maege howyar por jta merge korci oita 100% sorted hoy but onnota faka hoye jay..
    list<int>list_3= {1,2,3,7,54,2};
    list<int>list_4= {14,56,75,22,2};
cout<<"before merge list_3 is : ";
    for(auto mk : list_3)cout<<mk<< " ";
    cout<<endl;
    cout<<"before merge list_4 is : ";
    for(auto mk : list_4)cout<<mk<< " ";
    cout<<endl;


    cout<<"after merge \n";
    list_3.merge(list_4);
    cout<<"after merge list_3 is : ";
    for(auto mk : list_3)cout<<mk<< " ";
    cout<<endl;
    cout<<"agter merge list_4 is : ";

    for(auto mk : list_4)cout<<mk<< " ";
    cout<<endl;
}
int main ()

{
    ///list_1();///list declearatin
    //list_2();///list declearatin
    list_3();///list declearatin

}
