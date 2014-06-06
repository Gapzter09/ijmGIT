#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{   ifstream in;
    char sin[80];
    int count=0;
    float m[2], d[2], y[2];
    in.open("dates.in");
    while(count<2){//!in.eof()){
        in.getline(sin,80);
        m[count]=atof(strtok(sin,"-"));
        d[count]=atof(strtok(0,"-"));
        y[count]=atof(strtok(0,"\0"));
        cout<<m[count]<<"/"<<d[count]<<"/"<<y[count]<<endl;
        count++;
        //cout<<sin<<endl;
    }
    float date1 = m[0]*30+y[0]*365.25+d[0];
    float date2 = m[1]*30+y[1]*365.25+d[1];
    float diff;
    if(date1>date2)
       diff = date1 - date2;
    else
       diff = date2 - date1;
    cout<<"age in days: "<< diff <<endl;
    cout<<"age in years: "<< (int)(diff/365.25) <<endl;
    //----------------------
    int j;
    in>>j;
    cout<<j<<endl;
    in>>j;
    cout<<j<<endl;
    //in>>sin;
    in.getline(sin,80);//disregard
    in.getline(sin,80);
    cout<<sin<<endl;
    in>>j;
    cout<<j<<endl;
    in>>j;
    cout<<j<<endl;
    in.getline(sin,80);
    in.getline(sin,80);
    cout<<sin<<endl;
    cout<<strtok(sin,"xx");
    char *s;
    int x=0;
    while(s=strtok(0,"xx")){
       cout<<s;
       x++;
    }
    cout<<endl;
    cout<<"there are "<<x<<" xx found"<<endl;
        
    
    
    
    
    
    in.close();



















    /*
    float m=0, d=0, y=0, days[2];
    int count=0;
    char s[80];
    while(!in.eof()){
        in.getline(s,80);
        cout<<s<<endl;
        m=atof(strtok(s,"-"));
        d=atof(strtok(0,"-"));
        y=atof(strtok(0,"\0"));
        days[count]=m*30+y*365.25+d;
        count++;
    }
    float years=((days[0]-days[1])/365.25);
    float month=(years-(int)years)*365.25/30;
    float day=(years-(int)years)*365.25;
    cout<<"years: "<<years<<endl;
    cout<<"months: "<<month<<endl;
    cout<<"days: "<<day<<endl;
    
    /*
    while(!in.eof()){
        in>>x;
        for(int i=0; i<=x; i++){
            in.getline(s,80);
            cout<<s<<endl;
        }
        cout<<"----"<<endl;
    }
    //string str;
    /*
    //while(!in.eof()){
        //getline(in, str);
    in>>str;
        cout<<str<<endl;
    in>>str;
        cout<<str<<endl;
    //}
    int i=0,j;
    while(i<4){
       in>>j;
       cout<<j<<endl;
       i++;
    }
    //while(i<2)
    char str1[80];
    in.getline(str1,80);
    while(!in.eof()){
        in.getline(str1,80);
        //cout<<str1<<endl;
        cout<<strtok(str1,"-")<<endl;
        cout<<strtok(0,"-")<<endl;
        cout<<strtok(0,"\0")<<endl;        
    }
    */
    system("PAUSE");
    return EXIT_SUCCESS;
}
