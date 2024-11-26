#pragma once
#include<iostream>
using namespace std;

class PC
{
protected:
    string name;
    string cpu;
    string gpu;
    string ssd;
    string ram;
    double price;
public:
    PC() {}
    PC(string nm, string cp, string gp, string ss, string r)
    {
        name = nm;
        cpu = cp;
        gpu = gp;
        ssd = ss;
        ram = r;
        price = 0.0;
    }
    virtual void Print()
    {
        cout << name << "\t" << cpu << "\t" << gpu << "\t" << ssd << "\t" << ram << "\n";
    }
    virtual double GetPrice()
    {
        return price;
    }
};

class Office :public PC
{
    string micro;
public:
    Office() {}
    Office(string nm, string cp, string gp, string ss, string r, string mic) :PC(nm, cp, gp, ss, r), micro(mic)
    {
        micro = mic;
        price = 30'000;
    }
    virtual void Print()
    {
        PC::Print();
        cout << micro << endl;
    }
    virtual double GetPrice()
    {
        return price;
    }
};

class Game :public PC
{
    string key;
    string mouse;
public:
    Game(){}
    Game(string nm, string cp, string gp, string ss, string r, string k, string m) :PC(nm, cp, gp, ss, r), mouse(m), key(k)
    {
        mouse = m;
        key = k;
        price = 100'000;
    }
    virtual void Print()
    {
        PC::Print();
        cout << mouse << endl;
    }
    virtual double GetPrice()
    {
        return price;
    }
};

class Home :public PC
{
    string web;
public:
    Home() {}
    Home(string nm, string cp, string gp, string ss, string r, string w) :PC(nm, cp, gp, ss, r), web(w)
    {
        web = w;
        price = 50'000;
    }
    virtual void Print()
    {
        PC::Print();
        cout << web << endl;
    }
    virtual double GetPrice()
    {
        return price;
    }
};